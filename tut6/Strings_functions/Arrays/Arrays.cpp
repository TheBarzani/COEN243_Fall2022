// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

bool is_prime(int); // returns if a number is prime or not
int square(int); // returns square of a number 
float sqroot(float); // returns sqrt of a number 
void print_name(int); // prints the name for a given ID
int pow(int, int); // returns a number to the power of another number

int main()
{
    int a = 9;
    string my_text;
    my_text = to_string(a);
    int b = square(a);

    cout << pow(3, 3);

}

bool is_prime(int a) {
    return false;
}

int square(int a) {
    return a * a; 
}

float sqroot(float b) {
    return b;
}
void print_name(int a) {
    if (a == 1) {
        cout << "one";
    }
    if (a == 2) {
        cout << "two";
    }
}

int pow(int a, int b) { // example: a=3, b=3
    if (b == 1) {
        return a;
    }
    return a*pow(a, b-1);
}