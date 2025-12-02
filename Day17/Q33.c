//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
void extract(int arr[],int m,int n);
float arm(int arr[],int m);
int count(int n);

int main(){
    int x;
    printf("ENTER THE NUMBER:\n");
    scanf("%d",&x);
    int a = count(x);
    int arr[a];
    extract(arr,a,x);
    if(x==arm(arr,a)){
        printf("IT IS AN ARMSTRONG NUMBER\n");
    }
    else{
        printf("IT IS NOT AN ARMSTRONG NUMBER:\n");
    }

}
void extract(int arr[],int m,int n){
    while(n>0){
        for(int i =0;i<m;i++){
        int ldigit = n%10;
        arr[i]=ldigit;//storing extracted number in an array
        n=n/10;

        }
    }
}
float arm(int arr[],int m){
    
    float sum = 0;
    for(int i=0;i<m;i++){
        sum = sum + pow(arr[i],m);
    }
    return sum;
}
int count(int n){
    int count1 = 0;
    while (n > 0) {
        n = n / 10;
        count1++;
    }
    return count1;
}
