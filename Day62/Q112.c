/*Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
*/

#include <stdio.h>

void read(int arr[], int n);
void print(int arr[], int n);
void kadane(int arr[], int n);

int main(){
    int n;
    printf("ENTER THE NUMBER OF ELEMENTS IN THE ARRAY:\n");
    scanf("%d",&n);
    if(n <= 0){
        printf("NUMBER OF ELEMENTS MUST BE POSITIVE\n");
        return 0;
    }
    int arr[n];
    printf("ENTER THE VALUES IN THE ARRAY:\n");
    read(arr, n);

    printf("THE ARRAY IS:\n");
    print(arr, n);
    printf("\n");

    kadane(arr, n);

    return 0;
}

void read(int arr[], int n){
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
}

void kadane(int arr[], int n){
    int max_sum = arr[0];
    int current_sum = arr[0];
    
    for(int i = 1; i < n; i++){
        current_sum = (arr[i] > current_sum + arr[i]) ? arr[i] : current_sum + arr[i];
        max_sum = (current_sum > max_sum) ? current_sum : max_sum;
    }
    
    printf("THE MAXIMUM SUM OF CONTIGUOUS SUBARRAY IS: %d\n", max_sum);
}