/*Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. 
The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. 
Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. 
If no solution exists, print "-1 -1".*/
#include <stdio.h>
#include <stdlib.h>

void input(int arr[], int n);
void display(int arr[], int n);
void findTwoSum(int arr[], int n, int target);

int main(){
    int n = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int *nums = NULL;
    nums = (int*)malloc(n * sizeof(int));
    
    input(nums, n);
    display(nums, n);
    
    int target = 0;
    printf("Enter the target: ");
    scanf("%d", &target);
    
    findTwoSum(nums, n, target);
    
    free(nums);
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

void findTwoSum(int arr[], int n, int target){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == target){
                printf("%d %d", i, j);
                return; 
            }
            else{
                continue;
            }
        }
    }
    printf("-1 -1"); // if no such pair exists
}