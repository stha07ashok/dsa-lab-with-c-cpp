#include <stdio.h>
void selectionSort(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        int min_index = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }
}
void display(int a[], int n) {
    printf("SORTED ARRAY:\n");
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
    selectionSort(a, 5);
    display(a, 5);
    return 0;
}
