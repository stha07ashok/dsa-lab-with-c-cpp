#include<iostream>
using namespace std;
void displayArray(int arr[], int size){
    cout<<"Array elements:"<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr[i];
    }
    cout<<endl;
}

void arrayDeletion(int arr[], int size, int index){
    for (int i = index; i<size; i++){
        arr[i]=arr[i+1];
    }
}
int main(){
    int arr[100] = {1,2,3,4,5};
    int size = 5, index = 3;
    displayArray(arr,size);

    //deletion code
    arrayDeletion(arr, size, index); 
    size = size - 1;
    displayArray(arr,size);
    return 0;
}