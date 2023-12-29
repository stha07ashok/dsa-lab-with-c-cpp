#include<iostream>
using namespace std;

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5, index = 3;

    // Display Array elements before deletion
    cout << "Array elements:" << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i];
    }
    cout << endl;

    // Deletion code
    for (int i = index; i < size - 1; i++){
        arr[i] = arr[i + 1];
    }
    size = size - 1;

    // Display Array elements after deletion
    cout << "Array elements after deletion:" << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i];
    }
    cout << endl;

    return 0;
}
