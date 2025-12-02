//Write a program to print numbers from 1 to n.

#include <stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER TILL WHERE YOU WANT THE NUMBERS TO BE PRINTED:");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        printf("%d\n",i);
    }
    return 0;

}