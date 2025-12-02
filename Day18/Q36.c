//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int hcf(int a,int b);
int min(int a,int b);
int main(){
    int a,b;
    printf("ENTER THE FIRST NUMBER:\n");
    scanf("%d",&a);
    printf("ENTER THE SECOND NUMBER:\n");
    scanf("%d",&b);
    printf("THE HCF/GCD OF %d and %d is %d",a,b,hcf(a,b));
    return 0;

}
int hcf(int a, int b){
    int c = a-b;
    int gcd;
    for(int i = 1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){//a number which is <=min(a,b) and divides both a and b
            gcd =i;
        }
        
    }
    return gcd;
}
int min(int a,int b){
    if(a>b){
        return b;
    }
    if(b>a){
        return a;
    }
    else{
        return a;
    }
}

