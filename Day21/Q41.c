//Write a program to swap the first and last digit of a number.
#include <stdio.h>
void extract(int arr[],int n,int m);
int count(int a);
void interchange(int arr[],int n);
void print(int arr[],int n);
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
    while(m>0){
        for(int i=0;i<n;i++){
            int ldigit=m%10;
            arr[i]=ldigit;
            m=m/10;
        }
    }
    interchange(arr,n);
    printf("THE NEW NUMBER IS:\n");
    print(arr,n);
}
void interchange(int arr[],int n){
    int first = arr[0];
    int last =arr[n-1];
    arr[0]=last;
    arr[n-1]=first;

}
void print(int arr[],int n){
    for(int i=n-1;i>=0;i--){//while extracting digits and storing them in array they get reversed so we reverse print the array from n-1 index to 0 index
        printf("%d",arr[i]);
    }
}
int count(int a){//counting number of digits in entered number
    int count1=0;
    while(a>0){
        a=a/10;
        count1++;
    }
    return count1;
}


