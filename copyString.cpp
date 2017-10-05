// File: copyString
// Created by Juan Rangel Juarez on 10/5/17 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include <cstring>

using namespace std;

// Constants, Structs, Classes
const int MAX = 80;
const int DAYS = 43;

// Prototypes

// Main Program Program
int main() {
    char str1[] = "Tiger, tiger, burning bright \n"
               "in the forest";
    char std2[MAX];
    strcpy(std2, str1);
    cout << "str1 is " << str1 << endl;
    //cout << "str2 is " << str2 << endl;
    char days[DAYS][MAX] = {"Sunday","Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    for(int i = 0; i < DAYS; i++)
    {
        cout << i << " Day is " << days[i] << endl;
    }
    return 0;
}
// Function Definitions