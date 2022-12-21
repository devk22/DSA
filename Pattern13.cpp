#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "Please Enter a Value: ";
  cin >> n;

  int row = 1;
  
  while (row <= n) {
    int col = 1;
    while (col <= n) {
      cout << char(64+row+col-1) << " ";
      col = col + 1;      
    }
    cout<<endl;
    row = row + 1;
  }
}