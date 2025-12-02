//Write a program to find the product of odd digits of a number.
#include <stdio.h>
void extract(int arr[],int n,int m);
int count(int a);
int main(){
    int x;
    printf("ENTER THE NUMBER:\n");
    scanf("%d",&x);
    int a = count(x);
    int arr[a];
    extract(arr,a,x);
    return 0;
}
void extract(int arr[],int n,int m){
    int oddprod=1;
    while(m>0){
        for(int i=0;i<n;i++){
            int ldigit=m%10;
            arr[i]=ldigit;
            if(ldigit%2!=0){//checking if extracted digit is odd
                oddprod=oddprod*arr[i];//storing product of odd digits
            }
            m=m/10;
        }
    }
    printf("THE SUM OF ODD DIGITS IS %d",oddprod);
}
int count(int a){//counting number of digits in entered number
    int count1=0;
    while(a>0){
        a=a/10;
        count1++;
    }
    return count1;
}