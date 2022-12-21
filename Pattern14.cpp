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
      cout << char(64+row) << " "; //or we can use cout<<char('A' + row - 1) << " "; to get the same output
      col = col + 1;      
    }
    cout<<endl;
    row = row + 1;
  }
}