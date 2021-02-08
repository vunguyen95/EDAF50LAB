#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string getTrigrams(string &line)
{
	string res = "";
	long unsigned int i = 0;
	vector<string> trigrams;
	while (i < line.length() - 2)
	{
		trigrams.push_back(line.substr(i,3));
		i++;
	}
	
	sort(trigrams.begin(), trigrams.end());

	i = 0;

	while (i < trigrams.size()) { res += trigrams[i] + " "; i++; }

	return res;
}

string processLine(string &line) 
{

	int numTrigrams = line.length() - 2;
	string trigrams = "", res;

	transform(line.begin(), line.end(), line.begin(), ::tolower);

	if (numTrigrams > 0) trigrams = getTrigrams(line);
	if (numTrigrams < 0) numTrigrams = 0;
	
	res = line + " " + to_string(numTrigrams) + " " + trigrams + "\n";

	return res;
}

int main() 
{
	string line, processedLine;
	ifstream wordFile;
	ofstream resultFile;

       	wordFile.open("/usr/share/dict/words");
	resultFile.open("words.txt");

	if (wordFile.is_open()) 
	{
		while(getline(wordFile,line))
		{
			processedLine = processLine(line);
			resultFile << processedLine;
		}

		wordFile.close();
		resultFile.close();
	}

	return 0;
}
