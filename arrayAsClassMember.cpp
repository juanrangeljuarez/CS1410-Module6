// File: arrayAsClassMember
// Created by Juan Rangel Juarez on 10/3/17 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;

// Constants, Structs, Classes
const int MAX = 10;
class Stack
{
private:
    int st[MAX]; // stack: array of ints
    int top;    // number of top of stack
public:
    Stack() /*Constructor*/
    {
        top = -1;
    }
    void push(int var) // put member on stack
    {
        st[++top] = var; // push before increments
    }
    int pop() // take number of stack
    {
        return st[top--];
    }
};
// Prototypes

// Main Program Program
int main() {
    Stack s1;
    s1.push(11);
    s1.push(44);
    cout << "1 " << s1.pop() << endl;
    cout << "2 " << s1.pop() << endl;
    s1.push(1);
    s1.push(12);
    s1.push(14);
    s1.push(144);
    cout << "3 " << s1.pop() << endl;
    cout << "4 " << s1.pop() << endl;
    return 0;
}
// Function Definitions