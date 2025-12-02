//Insert an element in an array at a given position.
#include <stdio.h>
void read(int arr[],int n);
void print(int arr[],int n);
void insert(int arr[],int n,int pos,int val);

int main(){
    int x,pos,val;
    printf("Enter the number of elements:");
    scanf("%d",&x);
    int arr[x+1];
    read(arr,x);
    printf("Array:\n");
    print(arr,x);
    printf("\n");
    printf("Enter the position where you want to insert the element:");
    scanf("%d",&pos);
    printf("Enter the value of the element:");
    scanf("%d",&val);
    insert(arr,x,pos,val);
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

void insert(int arr[],int n,int pos,int val){
    for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=val;
    n++;
    printf("Array after insertion:\n");
    print(arr,n);
}
