#include <stdio.h>
#include <iostream>
using namespace std;

int main () {

    int a,b ;

    cout << "Please enter a: " << endl;
    cin >> a;

    cout << "Please enter b: " << endl;
    cin >> b;

    char op;
    cout << "Please enter the operation to be performed: " << endl;
    cin >> op;

    switch (op) {
        case '+' : cout << (a + b) << endl;
                    break;
        
        case '-' : cout << (a - b) << endl;
                    break;

        case '*' : cout << (a * b) << endl;
                    break;

        case '/' : cout << (a / b) << endl;
                    break;

        case '%' : cout << (a % b) << endl;
                    break;

        default: cout << "The operation is undefined." << endl; 

    }
}