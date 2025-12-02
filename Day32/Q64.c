//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
#include<stdlib.h>
#include <math.h>
int maxCountG= 0;   
void extract(int arr[],int n,int k);
int countd(int arr[],int n);
int count(int k);
int main(){
    int k;
    printf("ENTER A NUMBER: ");
    scanf("%d", &k);

    // for negatives......
    if (k < 0) k = abs(k);

    int n = 0;// intializing 
    n= count(k);         
    int arr[20];                    
    extract(arr, n, k);

    int digit = countd(arr, n);
    printf("Most occuring digit: %d (occurs %d times)\n", digit, maxCountG);

    return 0;

}
void extract(int arr[],int n,int k){
    while(k>0){
        for(int i =0;i<n;i++){
            int ldigit = k%10;
            arr[i]=ldigit;
            k=k/10;
        }
        
    }
}
int count(int k){
    if (k == 0) return 1;
    int count1 = 0;
    if (k < 0) k = abs(k);
    while (k > 0) {
        k /= 10;
        count1++;
    }
    return count1;
}

int countd(int arr[],int n){
    int freq[10] = {0};//assigning frequency of each digit as 0
    for (int i = 0; i < n; ++i) {
        int d = arr[i];
        if (d >= 0 && d <= 9)freq[d]++;
    }

    int max = 0;
    int mostDigit = 0;
    for (int j = 0; j <= 9; ++j) {
        if (freq[j] > max) {
            max = freq[j];
            mostDigit = j;
        }
    }
    maxCountG = max;
    return mostDigit;
}


