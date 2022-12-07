#pragma once

#include <iostream>
#include <string>
using namespace std;


// sample example of OOP: try to guess!
class cars{
public: // stuff here is visible to everyone
	// constructor
	cars(int n){numTires = n;}

	// attributes
	string color;
	string name;
	float engine_size;
	int numTires;
	string type;

	// sample methods
	void switch_on(){
		cout << name <<" engine noise so car is switched on" << endl;
	}
	void unlock();
	void lock(); 
	int speed();

};