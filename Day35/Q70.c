//Rotate an array to the right by k positions.
#include <stdio.h>
void read(int arr[],int n);
void print(int arr[],int n);
void rotate(int arr[],int n,int k);

int main(){
    int x,k;
    printf("Enter the number of elements:");
    scanf("%d",&x);
    int arr[x];
    read(arr,x);
    printf("Array:\n");
    print(arr,x);
    printf("\n");
    printf("Enter the number of positions to rotate:");
    scanf("%d",&k);
    rotate(arr,x,k);
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

void rotate(int arr[],int n,int k){
    k=k%n;
    int temp[n];
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
    printf("Array after rotation:\n");
    print(arr,n);
}
