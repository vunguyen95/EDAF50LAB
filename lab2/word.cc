#include <iostream>
#include <string>
#include <vector>
#include "word.h"

using std::vector;
using std::string;
using namespace std;


Word::Word(const string& w, const vector<string>& t) {
	this->word = w;
	this->trigrams = t;
}

string Word::get_word() const {
	return this->word;
}

unsigned int Word::get_matches(const vector<string>& t) const {

	unsigned int count = 0;

	for (long unsigned int i = 0; i < t.size(); i++)
		for (long unsigned int j = 0; j < trigrams.size(); j++)
		{	
			//if (t[i][0] > trigrams[j][0]) break; 
			//if (t[i][1] > trigrams[j][1]) break;
			
			//if (t[i][2] > trigrams[j][2]) break;
			if (t[i] == trigrams[j]) {
				count++;
				break;}
			
		}
	return count;
}
