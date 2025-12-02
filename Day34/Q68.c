//Delete an element from an array.
#include <stdio.h>
void read(int arr[],int n);
void print(int arr[],int n);
void del(int arr[],int n,int pos);

int main(){
    int x,pos;
    printf("Enter the number of elements:");
    scanf("%d",&x);
    int arr[x];
    read(arr,x);
    printf("Array:\n");
    print(arr,x);
    printf("\n");
    printf("Enter the position of the element you want to delete:");
    scanf("%d",&pos);
    del(arr,x,pos);
    return 0;
}

void read(int arr[],int n){
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}

void del(int arr[],int n,int pos){
    for(int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    printf("Array after deletion:\n");
    print(arr,n);
}
