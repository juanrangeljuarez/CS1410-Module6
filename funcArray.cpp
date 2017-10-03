// File: funcArray
// Created by Juan Rangel Juarez on 10/3/17 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
const int SIZE = 3;

// Constants, Structs, Classes
// Arrays are passed by reference
void AgeInput(int age[SIZE]);
void ShowAge(int iage[SIZE]);

const int ROWS = 3;
const int COL = 3;
// Prototypes

// Main Program Program
int main(){
    int age[SIZE];
    AgeInput(age);
    ShowAge(age);
    return 0;
}
// Function Definitions
void AgeInput(int iage[SIZE])
{
    for(int i = 0; i < ROWS; i++)
    {
            cout << "Enter your age: ";
            cin>>iage[i];
    }
}
void ShowAge(int iage[SIZE])
{
    for(int i = 0; i < ROWS; i++)
    {
            cout << "\tAge is: " << iage[i] << endl;
    }
}