// Name: Nick Brouwer
// Assignment 4


#ifndef BARCODEBSTSCANNER_H_
#define BARCODEBSTSCANNER_H_
#include <iostream>
#include "BST.h"
#include "Scanner.h"
using namespace std;


template <class T>
class BarcodeBSTScanner: public Scanner<T>{
     BinarySearchTree<T> *database;

public:
	BarcodeBSTScanner(BinarySearchTree<T> *_database):database(_database){}

	void scan(T& product){
		T found = database->find(product);
		product = found;
	}
};


#endif /* BARCODEBSTSCANNER_H_ */
