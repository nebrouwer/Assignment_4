// Nick Brouwer
// Assignment 4


#include "UPC.h"

// Constructor for UPC object
UPC::UPC() : code(""), value("") {}
UPC::UPC(string upc, string product):code(upc), value(product){

}
UPC::UPC(const UPC& upc):code(upc.code), value(upc.value){}

// Overloaded < operator
bool operator<(UPC& upc1, UPC& upc2){
	return upc1.code < upc2.code;
}

// Overloaded > operator
bool operator>(UPC& upc1, UPC& upc2){
	return upc1.code > upc2.code;
}

// Overloaded == operator
bool operator==(UPC& upc1, UPC& upc2){
	return upc1.code == upc2.code;
}

// Overloaded << operator
ostream& operator<<(ostream& os, UPC& u){
	os << u.code << ":" << u.value;
	return os;
}

