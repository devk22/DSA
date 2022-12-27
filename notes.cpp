#include <stdio.h>
#include <iostream>
using namespace std;

int main () {
    int amount;
    cout << "Please enter the amount: ";
    cin >> amount;

    int Rs100, Rs50, Rs20, Re1;

    switch (1) {
        case 1: {
            Rs100 = amount / 100;
            amount = amount % 100;
            cout << "Number of 100 Rs notes needed are " << Rs100 <<endl;
        }
        case 2: {
            Rs50 = amount / 50;
            amount = amount % 50;
            cout << "Number of 50 Rs notes needed are " << Rs50 << endl;
        }

        case 3: {
            Rs20 = amount / 20;
            amount = amount % 20;
            cout << "Number of 20 Rs notes needed are " << Rs20 << endl;
        }

        case 4: {
            Re1 = amount / 1;
            cout << "Number of 1 Re notes needed are " << Re1 << endl;
        }
    } 
}  