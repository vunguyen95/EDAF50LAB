#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <unordered_set>
#include "word.h"
#include "dictionary.h"

using namespace std;

const int MAXWORDSIZE = 26;
unordered_set <string> words;
vector<Word> triwords[MAXWORDSIZE];

Dictionary::Dictionary() {
	
	ifstream wordsFile ("words.txt");
	string line, word, token;
	char delim = ' ';
	long unsigned int size;

	while (getline(wordsFile,line)) 
	{

		vector<string> trigrams;
		stringstream ss(line);

		getline(ss, word, delim);

		words.insert(word);

		getline(ss, token, delim);
		
		while (getline(ss, token, delim))
			trigrams.push_back(token);
		size = word.length();

		if (size <= 25)
			triwords[size].push_back(Word(word,trigrams));

	}
	wordsFile.close();
}

bool Dictionary::contains(const string& word) const {	
	
	if (words.count(word) == 1) return true;
	return false;
}

void add_similar_size_words(vector<Word> &suggestedWords, long unsigned int &length)
{
        if (length > 1)
		for (long unsigned int i = 0; i < triwords[length - 1].size(); i++)
			suggestedWords.push_back(triwords[length - 1][i]);

	if (length < 25)
		for (long unsigned int i = 0; i < triwords[length + 1].size(); i++)
			suggestedWords.push_back(triwords[length + 1][i]);

	for (long unsigned int i = 0; i < triwords[length].size(); i++)
		suggestedWords.push_back(triwords[length][i]);

}

bool word_close_enough (Word &suggestedWord, const string &word)
{
	long unsigned int i = 0;
        vector<string> trigrams;
        while (i < word.length() - 2)
	{
	        trigrams.push_back(word.substr(i,3));
		i++;
	}	

	sort(trigrams.begin(), trigrams.end());

	int matches = suggestedWord.get_matches(trigrams);	
	
	if (matches >= static_cast<int>(i)/2) return true;

	return false;
}

void add_trigram_suggestions(vector<string> &suggestions,const string &word) 
{
	long unsigned int length = word.length();

	vector<Word> suggestedWords;
	
	add_similar_size_words(suggestedWords,length);

	for (long unsigned int i = 0; i < suggestedWords.size(); i++) {
		if (!word_close_enough(suggestedWords[i],word)) {
			suggestedWords.erase(suggestedWords.begin() + i);
			i--;
		}
	}
	for (long unsigned int i = 0; i < suggestedWords.size(); i++)
		suggestions.push_back(suggestedWords[i].get_word());

}
unsigned int distance(const std::string& s1, const std::string& s2)
{
		const std::size_t len1 = s1.size(), len2 = s2.size();
		std::vector<std::vector<unsigned int>> d(len1 + 1, std::vector<unsigned int>(len2 + 1));
		d[0][0] = 0;
		for(unsigned int i = 1; i <= len1; ++i) d[i][0] = i;
		for(unsigned int i = 1; i <= len2; ++i) d[0][i] = i;

		for(unsigned int i = 1; i <= len1; ++i)
			for(unsigned int j = 1; j <= len2; ++j)                            
	d[i][j] = std::min(std::min(d[i - 1][j] + 1, d[i][j - 1] + 1) ,d[i - 1][j - 1] + (s1[i - 1] == s2[j - 1] ? 0 : 1));
		return d[len1][len2];
}
void rank_suggestions(vector<string> &suggestions, const string &word)
{
	for(int i=0; i< suggestions.size()-1; i++)
		{
			for(int j=0;j<suggestions.size()-i-1;j++)
				if(distance(suggestions[j],word)> distance(suggestions[j+1],word))
							{
								string tmp=suggestions[j];
								suggestions[j]=suggestions[j+1];
								suggestions[j+1]=tmp;

							}
		}
			
}
void trim_suggestions(vector<string> &suggestions)
{
	if(suggestions.size()>5)
	{
		while(suggestions.size()>5)
			suggestions.pop_back();
	}
}
vector<string> Dictionary::get_suggestions(const string& word) const {
	vector<string> suggestions;
	add_trigram_suggestions(suggestions, word);
	rank_suggestions(suggestions, word);
	trim_suggestions(suggestions);
	return suggestions;
}
