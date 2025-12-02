//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int div(int arr[],int m,int n);
int main(){

}
int div(int arr[],int m,int n){
    int i = 1;
    while(n!=1){
        int t = n;
        for(int j = 0;j<m;j++){
          
            arr[j]=t%n;
            int t=n/2;
        }
    }
}
