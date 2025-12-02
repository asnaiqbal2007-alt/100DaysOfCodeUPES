/*Write a program to print the following pattern:
1
12
123
1234
12345*/
#include <stdio.h>
int pattern(int r,int c);
int main(){
    pattern(5,5);
    return 0;


}
int pattern(int r,int c){
    for(int i =1;i<=r;i++){//for number of rows
        for(int j =1;j<=i;j++){//for the stuff in the columns
        printf("%d",j);
        }
        printf("\n");
    }
    
}
