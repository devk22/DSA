#include<iostream>
using namespace std;

int AP (int n) {
    int nterm = ((3*n) + 7);
    return nterm;
}

int main () {
    int n;
    cout << "Please enter the number: " << endl;
    cin >> n;
    
    cout << "The nth term for the AP will be " << AP(n) << endl;
    return 0;
}