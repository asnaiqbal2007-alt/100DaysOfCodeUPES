/*Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs.
 The elements in the sorted array might be repeated. You need to print the first and last 
 occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
 */
#include <stdio.h>
#include <stdlib.h>
void sort(int arr[],int n);
void input(int arr[],int n);
void display(int arr[],int n);
//int occ(int arr[],int n);
void indexes(int arr[],int n,int k);

int main(){
    int n = 0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int *nums = NULL;
    nums = (int*)malloc(n*sizeof(int));
    
    input(nums,n);
    sort(nums,n);
    display(nums,n);
    int target = 0;
    printf("Enter the target: ");
    scanf("%d",&target);
    indexes(nums,n,target);
    free(nums);
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
//use this block if target autofind
/*int occ(int arr[],int n,){
    int repping = arr[0];
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[j]==arr[i]){
                repping = arr[j];
                return repping;
            }
        }
    }
}*/
void indexes(int arr[],int s,int k){
    int Present = 0;
    for(int l = 0;l<s;l++){
        if(arr[l]==k){
            Present = 1;
            break;
        }
    }
    if(Present == 1){
    //first index forward loop
    for(int i = 0;i<s;i++){
        if(arr[i]==k){
            printf("%d, ",i);
            break;
        }
    }
    //last index backward loop
    for(int j = s-1;j>=0;j--){
        if(arr[j]==k){
            printf("%d",j);
            break;
        }
    }

    }
    else{
        printf("-1,-1");
    }
    

}


