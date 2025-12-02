//Write a program to check if a number is prime.
#include <stdio.h>
/*Step1: declare isprime variable then set all cases less than equal to 1 to not prime
Step2: in all other cases run a loop from 2 to n-1 and if number is div by anyone set ispime to false and break from the loop.
*/
int isPrime = 1;
void isprime(int n);
int main(){
    int x;
    
    printf("ENTER THE NUMBER:");
    scanf("%d",&x);
    isprime(x);
    return 0;
    

}
void isprime(int n){
    if(n<=1){
        isPrime = 0;
    }
    else{
        for(int i=2;i<=(n-1);i++){
        if(n%i==0){
            isPrime=0;
            break;

                }
        
             }
        }
    if(isPrime==1){
        printf("THE ENTERED NUMBER IS PRIME.\n");
    }
    else{
        printf("THE ENTERED NUMBER IS NOT PRIME.\n");
    }
    

}
