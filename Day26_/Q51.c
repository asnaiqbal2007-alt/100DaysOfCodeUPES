/*Write a program to print the following pattern:
    5
   45
  345
 2345
12345*/
/*We can see that leading spaces are decreasing so outer loop for number of rows and inner loop 1 for spaces and inner loop 2 for stars*/
#include <stdio.h>
int pattern(int r);
int main(){
    pattern(5);
    return 0;
}
int pattern(int r){
    for(int i = 1;i<=r;i++){//number of rows
        for(int j = 1;j<=r-i;j++){//spaces compare with i or r
            printf(" ");
        }
        for(int k = r-i+1;k<=r;k++){// stars inner use i and r
            printf("%d",k);
        }
        printf("\n");
        
    }
}