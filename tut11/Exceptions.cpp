#include <iostream>
#include <cmath>
using namespace std;

int sqrtt(int a){
	try {
		if (a < 0) throw 1;
	}
	catch (...){
		cout << "Cannot find a square root of a negative number" << endl;
		return 1;
	}
	if (sqrt(a) == 0) throw 1;
	return sqrt(a);

}

int divide_sqrtt(int a, int b){
	try{
		sqrtt(b);
	}
	catch (...){
		cout << "Cannot divide by zero"; 
		return -1;
	}

	return sqrtt(a)/sqrtt(b);
}



int main(){

	int x = 10;
	int y = 0;
	divide_sqrtt(x,y);

}