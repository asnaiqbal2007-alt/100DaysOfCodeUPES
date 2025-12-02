// Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>
int sum(int n);
int main(){
    int k;
    printf("ENTER THE NUMBER OF NATURAL NUMBERS WHOSE SUM YOU WANT:");
    scanf("%d",&k);
    printf(" Sum of %d natural numbers is : %d",k,sum(k));
    return 0;

}
int sum(int n){
    if(n == 1){
        return 1;
    }
    int sumNm1=sum(n-1);
    int sumN=sumNm1+n;
    return sumN;
}