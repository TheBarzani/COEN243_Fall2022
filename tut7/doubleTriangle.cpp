#include <iostream>
#include <string>
using namespace std;

//code for call functions within functions and modularity

//prototypes
void upperTiangle(string str); // outputs the triangle with the base facing up
void lowerTiangle(string str); // outputs the triangle with the base facing down
// Modular function that calls the above functions accordingly
// Class Bug explanation: apparently default values is only needed to be given in the prototypes 
void doubleTiangle(string strU, string strL , int c=3);

// main function
int main()
{
	string myStr = "COEN243";
	doubleTiangle(myStr, myStr);
	return 0;
}

//definitions
void upperTiangle(string str){
	for (int i= 0; i < str.length(); i++){
		for (int j = 0; j < str.length()-i; j++){
			cout <<str[j] << "\t" ;
		}
		cout << endl;
	}
}
void lowerTiangle(string str){
	for (int i= 0; i < str.length(); i++){
		for (int j = 0; j <= i; j++){
			cout <<str[j] << "\t" ;
		}
		cout << endl;
	}
}

void doubleTiangle(string strU, string strL , int c){
	switch (c){
		case 1:
		{
			lowerTiangle(strL);
			break;
		}

		case 2:
		{
			upperTiangle(strU);
			break;
		}

		case 3:
		{
			lowerTiangle(strL);
			upperTiangle(strU);
			break;
		}

		case 4:
		{
			upperTiangle(strL);
			lowerTiangle(strU);
			break;
		}

	}
}