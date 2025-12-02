//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int odd(int n);
int main(){
    int x;
    printf("ENTER THE NUMBER OF ODD NUMBERS WHOSE SUM YOU WANT:");
    scanf("%d",&x);
    printf("SUM OF FIRST %d ODD NUMBERS IS %d",x,odd(x));
    return 0;

}
int odd(int n){
    int sum = 0;//this stores sum of odd numbers
    int count = 1;//initial odd number 

    for(int i = 1;i<=n;i++,count+=2){//here i tells how many times the loop runs for 5 odd numbers it runs till i<=5 and here count stores the odd numbers like first odd number is 1 so it stores 1, second odd number(i=2) is 3 so it stores 1+2=3;
        
        sum=sum+count;
      
    }
    return sum;
}
// it odd(n){
//return n*n;
//}sum of first n odd numbers is n square