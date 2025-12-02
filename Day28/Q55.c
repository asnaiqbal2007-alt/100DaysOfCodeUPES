/*Write a program to print all the prime numbers from 1 to n.*/
/*Alright I know how to check if a number is prime, so i will make a function out of it and
run a loop till the number i want to find primes and check prime for every i value and print i 
if its declared prime by the prime function*/
#include <stdio.h>
int prime(int n);
int main(){
    int x;
    printf("ENTER TILL WHICH NUMBER YOU WANT TO FIND PRIMES\n");
    scanf("%d",&x);
    for(int i =1; i<=x;i++){
        if(prime(i)){
            printf("%d\t",i);
        }
    }
    return 0;

}
int prime(int n){
    int isprime = 1;
    if(n<=1){
        isprime =0;
        }
    for(int i = 2; i<=(n-1);i++){
        if(n%i==0){
            isprime = 0;
            break;
        }
    }
    if(isprime == 1){
        return n;
    }

}