#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "Please Enter a Value: ";
  cin >> n;

  int row = 1;

  while (row <= n) {
    int col = 1;
    while (col <= row) {
      cout << char(64+row+col-1) << " "; // or we can use char( 'A' + row + col - 2 )
      col = col + 1;
    }
    cout<<endl;
    row = row + 1;
  }
}