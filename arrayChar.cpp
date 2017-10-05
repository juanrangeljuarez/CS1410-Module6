// File: arrayChar
// Created by Juan Rangel Juarez on 10/5/17 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>

using namespace std;

// Constants, Structs, Classes 
const int MAX = 10;

// Prototypes

// Main Program Program
int main() {
    char st[MAX];
    cout << "Enter your name: ";
    cin >> st;
    cout << "Hello " <<st << endl;
    /*Let the compiler calculate the space*/
    // String constants
    char hi[] = "Hello Weber State University Students!";
    cout << hi << endl;
    /*To support embedded blanks, use cin.get() function*/
    cout << "Enter your full name: ";
    cin.get(st,MAX);
    cout << "Hello " <<st << endl;
    return 0;
}
// Function Definitions