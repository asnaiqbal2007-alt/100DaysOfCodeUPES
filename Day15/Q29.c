//Write a program to calculate the factorial of a number.
#include <stdio.h>
int fact(int n);
int main(){
    int x;
    printf("ENETER THE NUMBER WHOSE FACTORIAL YOU WANT:");
    scanf("%d",&x);
    printf("FACTORIAL OF THE ENTERED NUMBER IS %d",fact(x));
    return 0;

}
int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    int factNm1=fact(n-1);
    int factn=factNm1*n;
    return factn;

}
/*int fact(int n){
int prod = 1;
for(int i = n;i>=1;i--){
prod=prod*i;
}
return prod;
}*/
