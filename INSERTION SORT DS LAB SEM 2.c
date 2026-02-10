INSERTION SORT

INSERTION SORT
#include <stdio.h>

void insertionSort(int a[], int n) {
for(int i=1;i<n;i++){
	int temp=a[i];
	int j=i-1;
	while(j>=0 && a[j]>temp){
		a[j+1]=a[j];
		j=j-1;
	}
	a[j+1]=temp;
}
}

int main() {
    int a[20], n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    insertionSort(a, n);

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
