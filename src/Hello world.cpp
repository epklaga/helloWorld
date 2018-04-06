//============================================================================
// Name        : Hello.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "template.h"
using namespace std;



bool arrayTest (int * posA, int * posB, int i) {

	for (int pos = 0; pos < i; ++pos) {
		if ( *posA == *posB){
			posA++;
			posB++;
			continue;
		}
		else {
			return false;
		}
	}
	return true;

}

int main() {

	myTest<int> testClass(1,2);

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout << "!!!Hello World GIT!!!" << endl; // prints !!!Hello World!!!
	cout << "!!!Hello World GIT!!!" << endl; // prints !!!Hello World!!!
	cout << "start" << endl;
	int j = 0;
	for (int i = 0; i < 10; ++i) {
		j++;
	}
	cout << "The sum is: "  << j << endl;
	int arrayA[3] = {1,2,4};
	int arrayB[3] = {1,2,3};

	if (arrayTest(arrayA, arrayB, 3)) {
		cout << "equal" << endl;
	}
	else {
		cout << "Not equal" << endl;
	}
	testClass.print();
	testClass.~myTest();
	return 0;

}
