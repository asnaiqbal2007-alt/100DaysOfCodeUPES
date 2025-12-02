//Write a program to find the sum of digits of a number.
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
    int sum = 0;
    while(m>0){//extracting digits
        for(int i=0;i<n;i++){
        int ldigit = m%10;
        arr[i]=ldigit;
        sum =sum + arr[i];//adding extracted digits in array refer q33
        m=m/10;
        }

    }   
    printf("THE SUM OF DIGITS IS %d\n",sum);

}
int count(int a){//counting number of digits in entered number
    int count1=0;
    while(a>0){
        a=a/10;
        count1++;
    }
    return count1;
}
