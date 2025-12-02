//Write a program to check if a number is a strong number.
/*sum of factorial of each digit = num then num is strong*/
/*STEP 1: EXTRACT DIGITS*/

#include <stdio.h>
int extract(int arr[],int n,int m);
int count(int a);
int fact(int n);
int main(){
    int x;
    printf("ENTER THE NUMBER:\n");
    scanf("%d",&x);
    int a = count(x);
    int arr[a];
    if(extract(arr,a,x)==x){
        printf("ENTERED NUMBER IS A STRONG NUMBER");
    }
    else{
        printf("ENTERED NUMBER IS NOT A STRONG NUMBER");
    }
    return 0;
}
int extract(int arr[],int n,int m){
    int sum =0;
    while(m>0){
        for(int i=0;i<n;i++){
            int ldigit=m%10;//extracting digits

            arr[i]=ldigit;
            
            sum =sum +fact(arr[i]);//storing sum of factorial of each digit
            
            m=m/10;
        }
    }
    return sum;
}
int count(int a){//counting number of digits in entered number
    int count1=0;
    while(a>0){
        a=a/10;
        count1++;
    }
    return count1;
}
int fact(int n){// factorial using recursion
    if(n==0||n==1){//base conditon
        return 1;
    }
    int factNm1=fact(n-1);
    int factN =factNm1*n;
    return factN;
}