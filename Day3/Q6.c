//Write a program to swap two numbers using a third variable.

#include <stdio.h>
void swap(int *a, int *b);//declaring a function with ptrs as we need to use call by reference not call by value
int main(){
    int x,y;
    printf("ENTER YOUR FIRST NUMBER:\n");
    scanf("%d",&x);
    printf("ENTER YOUR SECOND NUMBER:\n");
    scanf("%d",&y);
    swap(&x,&y);//as in the function we have used ptrs so we need to put address here to fill in the shoes iykwim
    printf("swapped numbers are %d %d",x,y);//The initial input numbers have been swapped thanks to our function
    return 0;

}
void swap(int *a, int *b){//we will use var t as an empty bucket and put in it value of a(*a) and in *a we will assign *b 
    int t;                //and in value of b(*b) we will assign value of intial t
    t=*a;
    *a=*b;
    *b=t;

}