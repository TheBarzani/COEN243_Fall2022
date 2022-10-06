// Tutorial 4
// Author: Ismael Ridha
// Reading from a file 
// 10-05-2022

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream myfile;
    myfile.open("inputfile.txt");
    if (!myfile.is_open()) {
        cout << "No files opened";
    }
    string mytext;
    getline(myfile, mytext);

    cout << mytext << endl;
}


