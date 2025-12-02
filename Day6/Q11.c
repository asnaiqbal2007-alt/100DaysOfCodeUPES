// Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
void nature(int n);
int main(){
    int x;
    printf("ENTER THE INTEGER:");
    scanf("%d",&x);
    nature(x);
    return 0;
    
}
void nature(int n){
    if(n%2==0){
        printf("%d IS EVEN",n);
    }
    
    else{
        printf("%d IS ODD",n);
    }
}