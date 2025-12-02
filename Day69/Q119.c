/*Write a program to take an integer array as input. Only one element will be repeated. 
Print the repeated element. Try to find the result in one single iteration.*/
#include <stdio.h>
#include <stdlib.h>

void input(int arr[], int n);
void display(int arr[], int n);
void findRepeated(int arr[], int n);

int main(){
    int n = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int *arr = NULL;
    arr = (int*)malloc(n * sizeof(int));
    
    input(arr, n);
    display(arr, n);
    
    findRepeated(arr, n);
    
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

void findRepeated(int arr[], int n){
    int *count = NULL;
    int maxVal = 0;
    
    for(int i = 0; i < n; i++){
        if(arr[i] > maxVal){
            maxVal = arr[i];
        }
        else{
            continue;
        }
    }
    
    count = (int*)calloc(maxVal + 1, sizeof(int));
    

    for(int i = 0; i < n; i++){
        count[arr[i]]++;
        if(count[arr[i]] > 1){
            printf("Repeated element: %d", arr[i]);
            free(count);
            return; 
        }
        else{
            continue;
        }
    }
    
    free(count);
}