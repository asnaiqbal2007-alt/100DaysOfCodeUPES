//Write a program to print all factors of a given number.
#include <stdio.h>
void factors(int n);
int main(){
    int x;
    printf("ENTER THE NUMBER:\n");
    scanf("%d",&x);
   
    printf("1 is a factor of %d\n",x);//because 1 is a factor of every number

    factors(x);
    return 0;


}
void factors(int n){
    for(int i = 2;i<(n+1);i++){
        if(n%i==0){
            printf("%d is a factor of %d\n",i,n);
        }
        else{
            continue;
        }
    }
}