// Name: Nick Brouwer
// Assignment 4

#include <iostream>
#include <time.h>
#include <fstream>
#include "BarcodeBSTScanner.h"
#include "UPC.h"
using namespace std;

/*int main() {
	BinarySearchTree<UPC> bst;

	ifstream file("upc_corpus.txt");
	string token1;
	string token2;
	while(file.good()) { //uses , as splitter instead of white space
		getline(file, token1, ',');
		getline(file, token2);
		UPC upc = UPC(token1, token2);
		bst.insert(upc);
		//cout << token1 << token2 << endl;
	}
	file.close();

	BarcodeBSTScanner<UPC> scanner = BarcodeBSTScanner<UPC>(&bst);


	string code;
	cout << "Enter UPC: ";
	cin >> code;

	clock_t t;
	t = clock();

	UPC upc(code, "");
	scanner.scan(upc);
	cout << upc.value << endl;

	t = clock() - t;
	cout << "time: " << t << " milliseconds" << endl;
	cout << CLOCKS_PER_SEC << " clocks per second" << endl;
	cout << "time: " << t*1.0/CLOCKS_PER_SEC << " seconds" << endl;

	return 0;
}*/
