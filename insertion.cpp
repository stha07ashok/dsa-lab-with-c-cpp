#include<iostream>
using namespace std;

void displayArray(int arr[], int size){
    cout << "Array elements: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int elementInsertion(int arr[], int size, int element, int capacity, int index){
    if (size >= capacity){
        return -1; // Indicates array is full, insertion failed
    }
    for (int i = size - 1; i >= index; i--){
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1; // Indicates successful insertion
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5, element = 100, index = 3;
    displayArray(arr, size);

    // Insertion
    int insertionResult = elementInsertion(arr, size, element, 100, index);
    if (insertionResult == 1) {
        size = size + 1;
        displayArray(arr, size);
    } else {
        cout << "Insertion failed. Array is full." << endl;
    }

    return 0;
}
