//Read and print elements of a one-dimensional array.
#include <stdio.h>
void read(int arr[],int n);
void print(int arr[],int n);
int main(){
    int x;
    printf("ENTER THE NUMBER OF ELEMENTS YOU WANT IN THE ARRAY\n");
    scanf("%d",&x);
    int arr[x];
    printf("ENTER THE VALUES IN THE ARRAY:\n");
    read(arr,x);
    printf("THE ARRAY IS:\n");
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