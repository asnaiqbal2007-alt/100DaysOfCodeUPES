// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
void nature(int n);
int main(){
    int x;
    printf("ENTER YOUR INTEGER:");
    scanf("%d",&x);
    nature(x);
    return 0;

}
void nature(int n){
    if(n>=0){
        if(n==0){
        printf("%d IS ZERO",n);
    }
        else{
         printf("%d IS POSITIVE",n);
        }
    }
    else{
        printf("%d IS NEGATIVE",n);

    }

}