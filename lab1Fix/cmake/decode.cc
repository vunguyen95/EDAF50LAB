#include<iostream>
#include<fstream>
#include<string>
using namespace std;
string& decode1(string& s)
{
	for (auto& c : s) {
		c = c - 1;
	}
	return s;
}
int main(/*int argc, const char** argv*/)
{	/*cout << argc <<endl;*/
	/*string filename{argv[1]};*/
	ifstream inFile;
	ofstream outFile;
	inFile.open("myfile.enc");
	outFile.open("filename.dec");
	string line;
	while (getline(inFile, line))
	{
		outFile << decode1(line) << endl;
	}
	inFile.close();
	outFile.close();

	return 0;
}
