#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Please enter a number: " ;
  cin >> n;

  int row = 1;
  while (row <= n) {
    
    // printing spaces wala triangle
    int space = n - row;
    while (space){
      cout << " ";
      space = space - 1;
    }

    // printing 2nd triangle 
    int col = 1;
    while (col <= row) {
      cout << col;
      col = col + 1;
    }

    // printing 2nd triangle
    int start = row - 1;
    while (start) {
      cout << start ;
      start = start - 1;
    }

    cout << endl;
    row = row + 1;
  }
}