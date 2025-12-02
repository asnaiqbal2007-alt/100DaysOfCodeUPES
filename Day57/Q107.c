/*Write a program to take an array arr[] of integers as input, the task is to find the previous greater 
element for each element of the array in order of their appearance in the array. Previous greater element
of an element in the array is the nearest element on the left which is greater than the current element. 
If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.
*/
#include <stdio.h>
#include <stdlib.h>

void input(int arr[],int n);
void display(int arr[],int n);
void greater(int arr[],int n);


int main(){
    int n = 0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int *arr = NULL;
    arr = (int*)malloc(n*sizeof(int));
    
    input(arr,n);
    display(arr,n);

    greater(arr,n);

    free(arr);
    return 0;
}

void display(int arr[],int s){
    printf("The entered array is:\n");
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

void greater(int arr[],int n){
    for(int i = 0;i<n;i++){
        int foundfirstgreater = 0;
        for(int j = i-1;j>=0;j--){//the change is here j=i-1 and j--
            if(arr[j]>arr[i]){
            printf("%d,",arr[j]);
            foundfirstgreater = 1;
            break;//to exit after finding the first greater
            }

        }
        if(foundfirstgreater ==0){
        printf("-1,");
        }
    }
}
