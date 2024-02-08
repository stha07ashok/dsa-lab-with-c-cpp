#include <stdio.h>
void bubbleSort(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void display(int a[], int n) {
    printf("The sorted array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main() {
    int a[5];
    printf("Enter the array to be sorted:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    bubbleSort(a, 5);
    display(a, 5);
    return 0;
}
