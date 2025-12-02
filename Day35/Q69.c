//Find the second largest element in an array.
//just sort the array and the second element would be second largest 
#include <stdio.h>
void read(int arr[],int n);
void print(int arr[],int n);
void sort(int arr[],int n);
int main(){
        int x;
    printf("Enter the number of elements:");
    scanf("%d",&x);
    int arr[x];
    read(arr,x);
    printf("Array:\n");
    print(arr,x);
    printf("\n");
    sort(arr,x);
    printf("Sorted Array:\n");
    print(arr,x);
    printf("\n");
    printf("The second largest element in the array is %d",arr[1]);
    return 0;

}
void read(int arr[],int n){
    printf("Enter the elements of the array:\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void print(int arr[],int n){
   
    for(int i = 0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
void sort(int arr[],int n){
    for(int i =0;i<n;i++){
        int cur=arr[i];
        for(int j = i+1; j<n;j++){
            if(arr[j]>arr[i]){
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
            else{
                continue;
            }
        }
    }
    
}
   