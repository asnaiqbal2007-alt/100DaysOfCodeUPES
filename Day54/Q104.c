/*Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all 
elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. 
If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.*/
#include <stdio.h>
int pivot(int n);

int main(){
    unsigned int n = 0;
    printf("Enter the positive number: ");
    scanf("%d",&n);
    printf("Pivot integer 'x': %d",pivot(n));
    return 0;
}

int pivot(int n){
    for(int i = 1;i<=n;i++){
        int sumr=0,suml= 0;
        for(int j = 1;j<=i;j++){
            suml+=j;
        }
        for(int k = i;k<=n;k++){
            sumr+=k;
        }

        if(sumr==suml){
            return i;
        }

    }
    return -1;
}
