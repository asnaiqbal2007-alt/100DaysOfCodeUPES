//Find the sum of array elements.
#include <stdio.h>
void read(int arr[],int n);
void print(int arr[],int n);
void sum(int arr[],int n);
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
    sum(arr,x);
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
void sum(int arr[],int n){
    int sum = 0;
    for(int i =0;i<n;i++){
        sum =sum +arr[i];
    }
    printf("THE SUM OF ALL THE ARRAY ELEMENTS IS : %d",sum);
}
