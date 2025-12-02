// Write a program to swap two numbers without using a third variable.

#include <stdio.h>
int main(){
    int x,y;
    printf("ENTER THE FIRST NUMBER:");
    scanf("%d",&x);
    printf("ENTER THE SECOND NUMBER:");
    scanf("%d",&y);
    printf("INITIAL NUMBER IS: %d %d \n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("SWAPPED NUMBER IS: %d %d",x,y);
    return 0;
}