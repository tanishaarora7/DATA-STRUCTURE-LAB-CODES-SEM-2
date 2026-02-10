Linear Search 

LINEAR SEARCH
#include<stdio.h>
int main(){
    int i,n,key,a[100],flag = 0,pos;
    printf("Array size: ");
    scanf("%d", &n);
 
  printf("enter array elements; ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter a key; ");
    scanf("%d",&key);
 
    for(i=0;i<n;i++){
        if(a[i] == key){
        pos = i;
        flag = 1;
        break;
        }
    }
    if(flag == 1){
        printf("found at position %d", i);
    }else {
        printf("%d not found", key);
    }
    return 0;
}
TANISHA ARORA
