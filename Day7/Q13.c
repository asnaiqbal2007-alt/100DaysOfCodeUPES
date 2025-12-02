// Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>
void leap(int x);
int main(){
    int y;
    printf("ENTER YOUR YEAR:");
    scanf("%d",&y);
    leap(y);
    return 0;
}

void leap(int x){
    if((x%4==0 && x%100!=0  ) || (x%400==0)){
        
    printf("ITS A LEAP YEAR");
    }
    else{
        printf("ITS NOT A LEAP YEAR");
    }
}
    
     