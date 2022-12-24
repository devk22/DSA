#include <iostream>
#include<math.h>
using namespace std;

int main (){
    int n;
  cout << "Please enter a binary number n: ";
    cin >> n;
   
    int ans = 0;
    int i=0;
    
    while (n != 0)   
    {
        int digit  = n % 10;
        ans = (digit*pow(2,i)) + ans;
        n = n/10;
        i = i + 1;
    }

    cout << "Answer is " << ans;
}