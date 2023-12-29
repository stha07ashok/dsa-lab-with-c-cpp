#include<iostream>
using namespace std;

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5, element = 100, index = 3;

    // Display Array elements
    cout << "Array elements: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // Insertion
    if (size >= 100) {
        cout << "Insertion failed. Array is full." << endl;
    } else {
        for (int i = size - 1; i >= index; i--){
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
        size = size + 1;

        // Display Array elements after insertion
        cout << "Array elements after insertion: ";
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
