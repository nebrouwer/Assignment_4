// Name: Nick Brouwer
// Assignment 4

#include <iostream>
#include <time.h>
#include "BarcodeArrayScanner.h"
#include "UPC.h"
#include <fstream>
#include <array>

//#include "BarcodeArrayScanner.h"
using namespace std;

int main() {

	UPC *arr = new UPC[1200000];
	int size = 0;


	ifstream file("upc_corpus.txt");
	string token1;
	string token2;
	while(file.good()) { //uses , as splitter instead of white space
		getline(file, token1, ',');
		getline(file, token2);
		UPC upc = UPC(token1, token2);
		arr[size] = upc;
		size++;
		//cout << token1 << token2 << endl;
	}
	file.close();

	BarcodeArrayScanner<UPC> scanner = BarcodeArrayScanner<UPC>(arr, size);


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
}

