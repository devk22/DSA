#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "Please Enter a Value: ";
  cin >> n;

  int row = 1;

  while (row <= n) {

    //pehle space print karlo
    int space = n - row;
    while (space) {
      cout << " ";
      space = space - 1;
    }

    //ab star print kkarenge
    int col = 1;
    while (col <= row) {
      cout << '*';
      col = col + 1;
    }
    cout << endl;
    row = row + 1;
  }
}