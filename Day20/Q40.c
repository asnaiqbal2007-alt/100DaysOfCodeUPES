//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
void extract(int arr[],int n,int m);
void print(int arr[],int n);
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
    while(m>0){
        for(int i = 0;i<n;i++){
        int ldigit = m%10;
        arr[i]=ldigit;
        if(arr[i]==1){//reversing bits
            arr[i]=0;
        }
        else{//reversing bits
            arr[i]=1;
        }
        m=m/10;
    
    }
    }
    print(arr,n);
}
int count(int a){//counting number of digits in entered number
    int count1=0;
    while(a>0){
        a=a/10;
        count1++;
    }
    return count1;
}
void print(int arr[],int n){
    for(int i=n-1;i>=0;i--){//while extracting digits and storing them in array they get reversed so we reverse print the array from n-1 index to 0 index
        printf("%d\t",arr[i]);
    }
}
