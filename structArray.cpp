// File: structArray
// Created by Juan Rangel Juarez on 10/3/17 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;

// Constants, Structs, Classes 
struct Part
{
    int modelNumber;
    int partNumber;
    float cost;
};
const int SIZE = 4;
// Prototypes
void enter(Part p[SIZE]);
// Main Program Program
int main() {
    Part p[SIZE];
    enter(p);
    for(int i = 0; i < SIZE; i++)
    {
        cout << "Model number: " << p[i].modelNumber << endl;
        cout << "Part Number: " << p[i].partNumber << endl;
        cout << "Part Cost: " << p[i].cost << endl;
        cout << endl;
    }
    return 0;
}
// Function Definitions
void enter(Part p[SIZE])
{

    for(int i = 0; i < SIZE; i++)
    {
        cout << "Enter model number: ";
        cin >>p[i].modelNumber;
        cout << "Enter part number";
        cin >> p[i].partNumber;
        cout << "Enter cost:";
        cin >> p[i].cost;
        cout << endl;
    }
}