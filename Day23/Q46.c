/*Write a program to print the following pattern:
*****
*****
*****
*****
*****
*/
#include <stdio.h>
void pattern(int r,int c);
int main(){
    int x,y;
    printf("ENTER THE NUMBER OF ROWS OF STARS YOU WANT(enter 5 for default pattern)\n");
    scanf("%d",&x);
    printf("ENTER THE NUMBER OF COLUMNS OF STARS YOU WANT(enter 5 for default pattern)\n");
    scanf("%d",&y);
    pattern(x,y);
    return 0;


}
void pattern(int r,int c){
    for(int i =1;i<=r;i++){//outer loop for rows
        for(int j =1;j<=c;j++){//inner loop for columns
            printf("*");
        }
        printf("\n");
    }
}
