/*Write a program to print the following pattern:
*
***
*****           part 1
*******
*********
------------------
*******         
*****           part 2
***
*
*/
#include <stdio.h>
void pattern(int r);

int main() {
    pattern(7);
    return 0;
}
void pattern(int r){
    for(int i = 1; i<=r;i++){//loop for increasing
        if(i%2!=0){//checks for odd number of stars
            for(int j = 1;j<=i;j++){
            printf("*");
            }
        
        printf("\n");
    }
}
    for(int i = 1; i<=(r-2);i++){//loop for decreasing
        if(i%2!=0){
            for(int j = r-i-1;j>0;j--){//need dependency of r from big to small on i otherwise we will get 5 stars everytume
            printf("*");
            }
        
        printf("\n");
    }
}
   
}
