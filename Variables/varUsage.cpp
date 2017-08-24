#include <iostream>
#include <string>
#include "varUsage.h"
using namespace std;

void varUsage::showDiffVarUsage() {
	int number;
	double decimalNumber;
	float decimalNumber2;
	char letter;
	string myName;
	bool trueOrFalse;

	number = 5;
	decimalNumber = 5.5;
	decimalNumber2 = 1.49E-5;
	letter = 'S';
	myName = "John";
	trueOrFalse = true;

	cout << "The value of number is " << number << endl;
	cout << "The value of decimalNumber is " << decimalNumber << endl;
	cout << "The value of decimalNumber2 is " << decimalNumber2 << endl;
	cout << "The value of letter is " << letter << endl;
	cout << "The value of myName is " << myName << endl;
	cout << "The value of trueOrFalse is " << trueOrFalse << endl;

}