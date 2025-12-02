/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer 
in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results 
separated by spaces as output.*/


#include <stdio.h>
#include <stdlib.h>

void input(int arr[],int n);
void display(int arr[],int n);
void findFirstNegative(int arr[],int n,int k);


int main(){
    int n = 0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int *arr = NULL;
    arr = (int*)malloc(n*sizeof(int));
    
    input(arr,n);
    display(arr,n);

    int k = 0;
    printf("Enter the window size k: ");
    scanf("%d",&k);

    printf("First negative in each window of size %d:\n",k);
    findFirstNegative(arr,n,k);
    printf("\n");

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

void findFirstNegative(int arr[],int n,int k){
    for(int i = 0;i<=n-k;i++){
        int foundNegative = 0;
        for(int j = i;j<i+k;j++){
            if(arr[j]<0){
                printf("%d ",arr[j]);
                foundNegative = 1;
                break;
            }
        }
        if(foundNegative ==0){
            printf("0 ");
        }
    }
}