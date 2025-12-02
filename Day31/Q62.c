//Reverse an array without taking extra space.
#include <stdio.h>
void read(int arr[],int n);
void print(int arr[],int n);
void rev(int arr[],int n);
int main(){
    int x;
    printf("ENTER THE NUMBER OF ELEMENTS YOU WANT IN THE ARRAY\n");
    scanf("%d",&x);
    int arr[x];
    printf("ENTER THE VALUES IN THE ARRAY:\n");
    read(arr,x);
    printf("THE ARRAY IS:\n");
    print(arr,x);
    printf("\n");
    rev(arr,x);
    printf("THE REVERSED ARRAY IS :\n");
    print(arr,x);
    return 0;

}
void read(int arr[],int n){
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void print(int arr[],int n){
    for(int i =0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
void rev(int arr[],int n){
    for(int i =0;i<(n/2);i++){//loop till n/2 to swap each number just once
        int curr = arr[i];
        int las = arr[n-i-1];
        arr[i]= las;
        arr[n-i-1]= curr;
    }
}
