#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <fstream>

using namespace std;

void printFrequencies(const string &str)
{
	//write your code here
	unordered_map< string , int> wordFreq;
	// breaking input into word using string stream
	stringstream ss(str); // Used for breaking words
	string word;		  // To store individual words
	while (ss >> word)
		wordFreq[word]++;

	// now iterating over word, freq pair and printing
	// them in <, > format
	unordered_map<string, int>::iterator p;
	for (p = wordFreq.begin(); p != wordFreq.end(); p++)
		cout << "(" << p->first << ", " << p->second << ")\n";
}

int main(int argc, char** argv)
{

	ifstream ifs("file.txt");
	string content((istreambuf_iterator<char>(ifs)),(istreambuf_iterator<char>()));

	printFrequencies(content);

	return 0;
}