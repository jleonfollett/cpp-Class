// SalesTax.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "SalesTax.h"
using namespace std;

void SalesTax::calcTax() {
	// Initialize variables.
	double purchase;
	double stateTax;
	double countyTax;
	double totalTax;

	// Perform calculations and fill in needed info.
	purchase = 52;
	stateTax = purchase * .04;
	countyTax = purchase * .02;
	totalTax = stateTax + countyTax;

	// Output answer.
	cout << "The purchase costed $" << purchase << ". \nThe state sales tax is $" << stateTax << ". \nThe county sales tax is $" << countyTax << ". \nThe total tax is $" << totalTax;

	// Keep the window up
	cin.ignore();
}

