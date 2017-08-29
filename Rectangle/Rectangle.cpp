#include <iostream>
#include "Rectangle.h"
using namespace std;

void Rectangle::calcArea() {
	// Compute and display the area
	int area;
	Rectangle::area = Rectangle::length * Rectangle::width;
	cout << "The area of the rectangle is " << area << endl;
}
void Rectangle::getLW() {
	cout << "This program calculates the area of a rectangle.\n";

	// Have the user input the rectangle's length and width	
	cout << "Enter the length and width of the rectangle ";
	cout << "separated by a space.\n";
	cin >> Rectangle::length >> Rectangle::width;
}