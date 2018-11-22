// Name: Nick Brouwer
// Assignment 4

#ifndef BARCODEARRAYSCANNER_H_
#define BARCODEARRAYSCANNER_H_
#include <iostream>
using namespace std;

class BarcodeArrayScanner {
public:
	int size;
	BarcodeArrayScanner();
	virtual ~BarcodeArrayScanner();
	void insert(string);
};

BarcodeArrayScanner::BarcodeArrayScanner(){
	size = 1000;
}

void insert(string){


}

BarcodeArrayScanner::~BarcodeArrayScanner() {

}

#endif /* BARCODEARRAYSCANNER_H_ */
