#include <iostream>
using namespace std;

// prototypes
// Three functions overloaded
int sum(int, int);
float sum(float, float);
float sum(int, float);

int main()
{
	int x = 2;
	int y= 3;
	float f = 2.5;
	float c = 3.91;
	cout << sum(y,c) << endl; //function on line 7 is used
	return 0;
}


//definitions
int sum(int a, int b){
	return a+b;
}

float sum(float a, float b){
	return a+b;
}

float sum(int a, float b){
	return a+b;
}