#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "Please Enter a Value: ";
  cin >> n;

  int row = 1;

  while (row <= n) {

    int col = 1;
    int star = n - row + 1;
    while (star) {
      cout << '*';
      col = col + 1;
      star = star - 1;
    }
    cout << endl;
    row = row + 1;
  }
}