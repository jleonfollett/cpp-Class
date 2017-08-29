#include "demoString.h"
#include <iostream>
#include <string>
using namespace std;

void demoString::showOffStuff() {
	string name;
	string city;
	cout << "Please enter your name: ";
	getline(cin, name);
	cout << "Enter the city you live in: ";
	getline(cin, city);
	cout << "Hello, " << name << endl;
	cout << "You live in " << city << endl;
}