/*
* word count 
* by korbin landrum
* oct 22 2026
* counts the amount of words in a sentance
*/

#include<iostream>
#include<string>
using namespace std;

int countWords(string str);


	int main(void) {
		string input;

		while (true) {

			cout << "Enter a string or Q to quit: ";
			getline(cin, input);
			if (input == "Q") break;
			cout << "word count: " << countWords(input) << endl; 
		}
		return 0;
	}

int countWords(string str) {
	int count = 0;
	bool inWord = false;

	for (char c : str) {
		if (isalnum(static_cast<unsigned char>(c))) {
			if (!inWord) {
				inWord = true;
				count++; // Only increment at the start of a valid word
			}
		}
		else {
			// Treat spaces, commas, periods, quotes, etc., all as word separators
			inWord = false;
		}
	}
	return count;
}