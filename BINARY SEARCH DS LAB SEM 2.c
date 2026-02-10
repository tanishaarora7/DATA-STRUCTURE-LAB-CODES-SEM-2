BINARY SEARCH 

BINARY SEARCH
#include<stdio.h>
int binarySearch(int arr[], int n, int x){
    int left = 0,right = n-1;
    while(left<=right){
        int mid = left + (right - left)/2;
        if (arr[mid] == x)
        return mid;
        else if (arr[mid] < x)
        left = mid + 1;
        else
        right = mid - 1;
    }
    return -1;
}
int main(){
int n,x;
printf("Array size: ");
scanf("%d", &n);

int arr[n];
printf("Enter array elements: ");
for(int i=0;i<n;i++){
scanf("%d", &arr[i]);
}
printf("element to be searched: ");
scanf("%d", &x);
int result = binarySearch(arr,n,x);

if(result != -1)
    printf("Element found at %d\n",result);
else
    printf("Element not found\n");
return 0;
}
