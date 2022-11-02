#include <iostream>
using namespace std;

// pass-by-reference sample function
void sqr (int&);

// pass-by-value sample function
// void sqr (int); 

int main()
{
	int x = 2;
	int y= 3;
	float f = 2.5;
	float c = 3.91;
	cout << x<< endl;
	sqr(x);
	cout << x << endl;
	return 0;
}

// squaring a variable and assigning it to itself
void sqr (int &a){
	a*=a;
}