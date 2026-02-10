SELECTION SORT

SELECTION SORT
#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIn = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIn]) {
                maxIn = j;
            }
        } {
            int temp = arr[i];
            arr[i] = arr[maxIn];
            arr[maxIn] = temp;
        }
    }   
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
