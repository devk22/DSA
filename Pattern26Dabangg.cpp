#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Please enter a number: " ;
  cin >> n;

  int row = 1;
  while (row <= n) {

    // printing 1st triangle 
    int col = 1;
    while (col <= n - row + 1) {
      cout << col;
      col = col + 1;
    }

    // printing 2nd triangle
    int star = 2*row - 2;
    while (star) {
      cout << "*" ;
      star = star - 1;
    }


    // printing 3rd triangle
    int dev = 1;
    while(dev <= n - row + 1) {
      cout << n - dev - row + 2;
      dev = dev + 1;
    }

    cout << endl;
    row = row + 1;
  }
}