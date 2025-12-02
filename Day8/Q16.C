// Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>
int max(int a, int b, int c);
int main(){
    int x,y,z;
    printf("ENTER THE FIRST NUMBER:\n");
    scanf("%d",&x);
    printf("ENTER THE SECOND NUMBER:\n");
    scanf("%d",&y);
    printf("ENTER THE THIRD NUMBER:\n");
    scanf("%d",&z);
    printf("MAX IS : %d",max(x,y,z));
    return 0;

}
int max(int a, int b, int c){
    int curmax = a;
    if(b>curmax){
        curmax = b;
    }
    if (c>curmax){
        curmax = c;
    }
    
    return curmax;
}
