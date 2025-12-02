/*Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] 
that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. 
Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.*/
#include <stdio.h>
#include <stdlib.h>
void sort(int arr[],int n);
void input(int arr[],int n);
void display(int arr[],int n);
void ceilofx(int arr[],int n,int x);

int main(){
    int n = 0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int *arr = NULL;
    arr = (int*)malloc(n*sizeof(int));
    
    input(arr,n);
    sort(arr,n);
    display(arr,n);

    int x = 0;
    printf("Enter the integer 'x': ");
    scanf("%d",&x);
  
    ceilofx(arr,n,x);
    free(arr);
    return 0;
}

void sort(int arr[],int s){
    for(int i = 0;i<s;i++){
        for(int j = i+1;j<s;j++){
            if(arr[j]<arr[i]){
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
void ceilofx(int arr[],int n,int x){


        for(int j = 0;j<n;j++){
            if(arr[j]>=x){
                printf("Index: %d",j);
                return;//exit as soon as you find an element which satisfies the condn
            }
        }
        printf("-1");//if no such element then -1
    
}
