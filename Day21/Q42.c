//Write a program to check if a number is a perfect number.
/*sum of factors = num then num is a perfect number*/
#include <stdio.h>
int factors(int n);
int main(){
    int x;
    printf("ENTER THE NUMBER:\n");
    scanf("%d",&x);
    if(factors(x)==x){
        printf("ENTERED NUMBER IS A PERFECT NUMBER");
    }
    else{
        printf("ENTERED NUMBER IS NOT A PERFECT NUMBER");
    }
   

    return 0;


}
int factors(int n){
    int sum = 1;//as im not running loop for 1 and its always a factor so im already considering it inside sum
    for(int i = 2;i<n;i++){
        if(n%i==0){
            sum = sum + i;
        }
        else{
            continue;
        }
    }
    return sum;
}