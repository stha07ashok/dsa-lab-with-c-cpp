#include <stdio.h>
void insertionSort(int a[], int n) {
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && temp <= a[j]) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }
}
void display(int a[], int n) {
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main() {
    int a[5];
    printf("Read:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    insertionSort(a, 5);
    display(a, 5);
    return 0;
}