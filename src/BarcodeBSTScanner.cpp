// Name: Nick Brouwer
// Assignment 4

#include <iostream>
#include <fstream>
#include "BarcodeBSTScanner.h"
using namespace std;

/*int main() {
	BarcodeBSTScanner<string> bst;

	ifstream file("upc_corpus.txt");
	string token1;
	string token2;
	while(file.good()) { //uses , as splitter instead of white space
		getline(file, token1, ',');
		getline(file, token2);
		bst.insert(token1, token2);
		//cout << token1 << token2 << endl;
	}
	file.close();
	bst.printInOrder();

	//string upc;
	//cout << "Enter UPC: ";
	//cin >> upc;
	//cout << bst.search(upc);

	/*clock_t t;
	t = clock();

	t = clock() - t;
	cout << "time: " << t << " milliseconds" << endl;
	cout << CLOCKS_PER_SEC << " clocks per second" << endl;
	cout << "time: " << t*1.0/CLOCKS_PER_SEC << " seconds" << endl;
}*/
