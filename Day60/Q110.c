/*Write a program to take an integer array arr and an integer k as inputs.
 The task is to find the maximum element in each subarray of size k moving from left to right. 
 Print the maximum elements for each window separated by spaces as output.
*/

#include <stdio.h>

void read(int arr[], int n);
void print(int arr[], int n);
void printmax(int arr[], int n, int k);

int main(){
    int n, k;
    printf("ENTER THE NUMBER OF ELEMENTS IN THE ARRAY:\n");
    scanf("%d",&n);
    if(n <= 0){
        printf("NUMBER OF ELEMENTS MUST BE POSITIVE\n");
        return 0;
    }
    int arr[n];
    printf("ENTER THE VALUES IN THE ARRAY:\n");
    read(arr, n);

    printf("ENTER THE WINDOW SIZE k:\n");
    scanf("%d",&k);

    if (k <= 0 || k > n){
        printf("WINDOW SIZE NOT DEFINED\n");
        return 0;
    }

    printf("THE ARRAY IS:\n");
    print(arr, n);
    printf("\n");

    printmax(arr, n, k);

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

void printmax(int arr[], int n, int k){
    printf("MAXIMUM ELEMENTS IN EACH SUBARRAY OF SIZE %d ARE:\n", k);
    for(int i = 0; i <= n - k; i++){
        int max = arr[i];
        for(int j = i+1; j < i + k; j++){
            if(arr[j] > max) max = arr[j];
        }
        printf("%d ", max);
    }

}