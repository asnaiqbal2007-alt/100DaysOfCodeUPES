/*Write a program to print the following pattern:
5
45
345
2345
12345*/
#include <stdio.h>
int pattern(int r);
int main(){
    pattern(5);
    return 0;
}
int pattern(int r){
    for(int i =1;i<=r;i++){
        for(int j =r-i+1; j<=r;j++){
                printf("%d",j);
        }
        printf("\n");
    }
}

