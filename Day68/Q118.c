/*Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. 
Print that missing number.*/
#include <stdio.h>
#include <stdlib.h>

void input(int arr[], int n);
void display(int arr[], int n);
void findMissing(int arr[], int n);

int main(){
    int n = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int *arr = NULL;
    arr = (int*)malloc(n * sizeof(int));
    
    input(arr, n);
    display(arr, n);
    
    findMissing(arr, n);
    
    free(arr);
    return 0;
}

void input(int arr[], int s){
    printf("Enter the values:\n");
    for(int i = 0; i < s; i++){
        scanf("%d", &arr[i]);
    }
}

void display(int arr[], int s){
    printf("The entered array is:\n");
    printf("[ ");
    for(int i = 0; i < s; i++){
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

void findMissing(int arr[], int n){
    int totalSum = 0;
    int arraySum = 0;
    
    
    for(int i = 0; i <= n; i++){
        totalSum = totalSum + i;
    }
    
    
    for(int i = 0; i < n; i++){
        arraySum = arraySum + arr[i];
    }
    
    int missing = totalSum - arraySum;
    printf("Missing number: %d", missing);
}