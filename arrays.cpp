#include <iostream>
using namespace std;
const int SIZE = 3;
int main()
{
    /*Define an array of 3 integers*/
    int age[SIZE];
    float amount = 2.1;
    float total = 4.5;
    for(int i = 0; i <= SIZE; i++)
    {
        cout << "Enter your age: ";
        cin >> age[i];
    }
    for(int i = 0; i <= SIZE; i++)
    {
        cout << "Age of " << i << " is " << age[i] <<endl;
    }
    cout << "Amount " << amount << endl;
    cout << "Total " << total << endl;
    cout << "Done!"<< endl;

    return 0;
}