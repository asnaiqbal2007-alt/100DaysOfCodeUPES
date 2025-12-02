/*Write a Program to take an array of integers as input, calculate the pivot index of this array. 
The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the
numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are
no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, 
print -1.
*/ 
#include <stdio.h>
#include <stdlib.h>

void input(int arr[],int n);
void display(int arr[],int n);
int pivot(int arr[],int n);

int main(){
    int n = 0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int *arr = NULL;
    arr = (int*)malloc(n*sizeof(int));
    
    input(arr,n);
    display(arr,n);

    printf("Pivot Index: %d",pivot(arr,n));

    return 0;
    free(arr);

}
void display(int arr[],int s){
    printf("The entered sorted array is:\n");
    printf("[ ");
    for(int i =0;i<s;i++){
        printf("%d ",arr[i]);
    }
    printf("]\n");
}

void input(int arr[],int s){
    printf("Enter the values:\n");
    for(int i = 0;i<s;i++){
        scanf("%d",&arr[i]);
    }
}
int pivot(int arr[],int n){
    

    for(int i = 0;i<n;i++){
    int sumleft = 0;//resetting everytime i head moves
    int sumright = 0;
        for(int j = i + 1;j<n;j++){
            sumright+=arr[j];
        }
        for(int k = 0;k<i;k++){
            sumleft+=arr[k];
        }
        if(sumleft == sumright){
            return i;
        }
    }
    return -1;//if no such index exists
}