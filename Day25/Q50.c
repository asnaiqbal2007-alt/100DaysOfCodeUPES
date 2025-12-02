/*Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/
#include <stdio.h>
int pattern(int r);
int main(){
    pattern(5);
    return 0;
}
int pattern(int r){
    for(int i=1;i<=r;i++){//in case of spaces 1 inner nested loop for spaces  and one inner for stars and outer is always for rows
        for(int j=1;j<i;j++){
            printf(" ");
        }
       
        for(int k = 1;k<=r-i+1;k++){
            printf("*");
        }
        printf("\n");
       
    }
}

