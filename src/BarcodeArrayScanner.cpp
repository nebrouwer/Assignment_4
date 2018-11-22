// Name: Nick Brouwer
// Assignment 4

#include "BarcodeArrayScanner.h"
#include <iostream>
#include <fstream>
#include <array>
using namespace std;

int main() {

	array<string, 2200000> arr;
	ifstream file("upc_corpus.txt");
	string token;
	while(getline(file, token, ',')) { //uses , as splitter instead of white space
		int count = 0;
		arr[count] = token;
		count++;
		//cout << token1 << token2 << endl;
	}
	file.close();
	for(int i = 0; i < arr.size(); i++){
		cout << arr[i] << endl;
	}
	return 0;
}

