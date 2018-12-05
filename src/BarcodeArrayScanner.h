// Name: Nick Brouwer
// Assignment 4

#ifndef BARCODEARRAYSCANNER_H_
#define BARCODEARRAYSCANNER_H_
#include <iostream>
#include "Scanner.h"
using namespace std;

template <class T>
class BarcodeArrayScanner: public Scanner<T>{
     T* database;
     int size;

public:
    // Constructor for the main array scanner object
    BarcodeArrayScanner(T* _database, int size):database(_database), size(size){}

    // Function to scan the array for a UPC
	void scan(T& product){
		for(int i = 0; i < size; i++){
			if(product.code == database[i].code){
				product = database[i];
				return;
			}
		}
	}

	~BarcodeArrayScanner(){
		delete database;
	}
};


#endif /* BARCODEARRAYSCANNER_H_ */
