// Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int even(int n);
int main(){
    int x;
    printf("ENTER");
    scanf("%d",&x);
    printf("PRODUCT OF EVEN NUMBER IN RANGE IS :%d",even(x));
    return 0;

}
int even(int n){
    int prod = 1;//initial product
    int count = 2;//stores even number
    for(int i = 1;i<=n/2;i++,count+=2){//calculates number of loops
        prod=prod*count;
    }
    return prod;
}
