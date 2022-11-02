#include <iostream>
#include "cars.h"
using namespace std;

// driver cpp file for the the 'cars' class
int main(){

	// declaring an object of the cars class
	cars toyota;

	// setting up the objects arrtibute
	toyota.color = "red";
	toyota.name = "Corolla";
	toyota.type = "sedan";

	//invoking a sample method of the class
	toyota.switch_on();

	return 0;
}