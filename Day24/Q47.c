/*Write a program to print the following pattern:
*
**
***
****
*****
*/
#include <stdio.h>
void pattern(int r,int c);
int main(){
    pattern(5,5);
    return 0;
    
}
void pattern(int r,int c){
    for(int i =1;i<=r;i++){
        for(int j =1;j<=i;j++){//in complex pattern compare i with j in inner loop
            printf("*");
        }
        printf("\n");
    }
}
