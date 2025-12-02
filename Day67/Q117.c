/*Write a program to take two sorted arrays of size m and n as input. 
Merge both the arrays such that the merged array is also sorted. Print the merged array.*/
#include <stdio.h>
#include <stdlib.h>

void input(int arr[], int n);
void display(int arr[], int n);
void mergeSortedArrays(int arr1[], int m, int arr2[], int n, int merged[]);

int main(){
    int m = 0, n = 0;
    
    printf("Enter the size of first array: ");
    scanf("%d", &m);
    
    printf("Enter the size of second array: ");
    scanf("%d", &n);
    
    int *arr1 = NULL;
    int *arr2 = NULL;
    int *merged = NULL;
    
    arr1 = (int*)malloc(m * sizeof(int));
    arr2 = (int*)malloc(n * sizeof(int));
    merged = (int*)malloc((m + n) * sizeof(int));
    
    printf("For first array:\n");
    input(arr1, m);
    display(arr1, m);
    
    printf("For second array:\n");
    input(arr2, n);
    display(arr2, n);
    
    mergeSortedArrays(arr1, m, arr2, n, merged);
    
    printf("The merged sorted array is:\n");
    display(merged, m + n);
    
    free(arr1);
    free(arr2);
    free(merged);
    return 0;
}

void input(int arr[], int s){
    printf("Enter the values:\n");
    for(int i = 0; i < s; i++){
        scanf("%d", &arr[i]);
    }
}

void display(int arr[], int s){
    printf("[ ");
    for(int i = 0; i < s; i++){
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

void mergeSortedArrays(int arr1[], int m, int arr2[], int n, int merged[]){
    int i = 0, j = 0, k = 0;
    

    while(i < m && j < n){
        if(arr1[i] <= arr2[j]){
            merged[k] = arr1[i];
            i++;
            k++;
        }
        else{
            merged[k] = arr2[j];
            j++;
            k++;
        }
    }
    

    while(i < m){
        merged[k] = arr1[i];
        i++;
        k++;
    }
    
  
    while(j < n){
        merged[k] = arr2[j];
        j++;
        k++;
    }
}