/*Write a program to take an integer array nums of size n, and print the majority element.
The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists.
Note: Majority Element is not necessarily the element that is present most number of times.*/
#include <stdio.h>
#include <stdlib.h>

void input(int arr[],int n);
void display(int arr[],int n);
int repping(int arr[],int n);
void majority(int arr[],int n);


int main(){
    int n = 0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int *arr = NULL;
    arr = (int*)malloc(n*sizeof(int));
    
    input(arr,n);
    display(arr,n);

    majority(arr,n);

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

int repping(int arr[],int n){
    int curep = arr[0];
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[j]==arr[i]){
            return arr[i];
            }
        }
    }

}
void majority(int arr[],int n){
    int rep = repping(arr,n);
    int count = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]==rep){
            count++;
        }
    }
    if(count>=(n/2)){
        printf("Majority Element: %d",rep);
    }
    else
    printf("Majority Element: -1");
}

