#include <iostream>
using namespace std;

int printArray(int arr[], int size) {
    for (int i = 0; i <= size; i++) {
        cout << arr[i] << " ";
    }
    cout << "printing is done" << endl;
}

int main () {
    int array[10] = {0};
    int n = 10;
    printArray(array, 10);
}