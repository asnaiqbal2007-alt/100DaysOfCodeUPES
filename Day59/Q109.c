/*Write a program to take an integer array arr and an integer k as inputs. 
Print the maximum sum of all the subarrays of size k.*/
#include <stdio.h>
#include <stdlib.h>

void input(int arr[],int n);
void display(int arr[],int n);
int subarrcmp(int arr[],int n,int k);


int main(){
    int n = 0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int *nums = NULL;
    nums = (int*)malloc(n*sizeof(int));
    
    input(nums,n);
    display(nums,n);

    unsigned int k = 0;//as k cant be negative
    printf("Enter integer 'k':");
    scanf("%d",&k);

    printf("%d",subarrcmp(nums,n,k));

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


int subarrcmp(int arr[],int n,int k){
    int maxsum = -9999999;
    for(int i = 0;i<=n-k;i++){
      
        int sum = arr[i];
        //printf("[ ");
        //printf("%d,",arr[i]);
        for(int j = i+1;j<i+k;j++){
           /*if(count == k){
            break;
           }
           else{*/
            //printf("%d,",arr[j]);
            sum=sum+arr[j];
           
           
           //count++;
        }
        
        if(sum>maxsum){
            maxsum = sum;
        }
        
    }
    return maxsum;
}
