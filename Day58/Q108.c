/*Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the 
product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
*/
#include <stdio.h>
#include <stdlib.h>

void input(int arr[],int n);
void display(int arr[],int n);
void answer(int arr[],int n);


int main(){
    int n = 0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int *nums = NULL;
    nums = (int*)malloc(n*sizeof(int));
    
    input(nums,n);
    display(nums,n);
    answer(nums,n);

    free(nums);
    return 0;
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
//here we are taking products from both sides like from left and right so two nested loops one to move from 0 to i-1 and one from i
//+1 to end
void answer(int arr[],int n){
    printf("[ ");
    for(int i = 0;i<n;i++){
        int prodright = 1;//reset after every complete right traversal
        for(int j = i+1;j<n;j++){
            prodright*=arr[j];
        }
        int prodleft = 1;
        for(int k = 0;k<i;k++){
            prodleft*=arr[k];
        }
        int finalprodexcepti = prodleft*prodright;
        printf("%d,",finalprodexcepti);
    }
    printf("]");
}
