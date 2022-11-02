#include <iostream>
using namespace std;

// default value given to a parameter for optional arg provision
float divide(int a, int b=2){
	return a/b;
}

// static variable used for tracking how many times the function is called
void printCalls(){
	static int cnt = 1; // counter
	cout << "This function is called "  << cnt << " times" << endl;
	cnt ++; 
}
	
// main function: program starts here
int main(){

	int x = 10;
	int y = 5;

	// call the function 8 times
	printCalls();
	printCalls();
	printCalls();
	printCalls();
	printCalls();
	printCalls();
	printCalls();
	printCalls();

	return 0;
}