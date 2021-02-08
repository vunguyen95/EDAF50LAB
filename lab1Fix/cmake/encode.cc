#include<iostream>
#include<fstream>
#include<string>
using namespace std;
string& encode1(string& s)
{
	for (auto& c : s) {
		c = c + 1;
	}
	return s;
}
int main(/*int argc, const char** argv*/)
{	/*cout << argc <<endl;*/
	/*string filename{argv[1]};*/
	ifstream inFile;
	ofstream outFile;
	inFile.open("test.txt");
	outFile.open("myfile.enc");
	string line;
	while (getline(inFile, line))
	{
		outFile << encode1(line) << endl;
	}
	inFile.close();
	outFile.close();

	return 0;
}