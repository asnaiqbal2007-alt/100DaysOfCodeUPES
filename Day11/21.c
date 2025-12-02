//Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>
void month(int a);
int main(){
    int n;
    printf("ENTER THE NUMBER OF MONTH (1-12)");
    scanf("%d",&n);
    month(n);
    return 0;
}

void month(int a){
    
    switch (a){
        case 1:
        printf("January\n");
        printf("Number of days = 31\n");
        break;
         case 2:
        printf("February\n");
        printf("Number of days = 28 or 29\n");
        break;
         case 3:
        printf("March\n");
        printf("Number of days = 31\n");
        break;
         case 4:
        printf("April\n");
        printf("Number of days = 30\n");
        break;
         case 5:
        printf("May\n");
        printf("Number of days = 31\n");
        break;
         case 6:
        printf("June\n");
        printf("Number of days = 30\n");
        break;
        case 7:
        printf("July\n");
        printf("Number of days = 31\n");
        break;
        case 8:
        printf("August\n");
        printf("Number of days = 31\n");
        break;
        case 9:
        printf("September\n");
        printf("Number of days = 30\n");
        break;
        case 10:
        printf("October\n");
        printf("Number of days = 31\n");
        break;
        case 11:
        printf("November\n");
        printf("Number of days = 31\n");
        break;
        case 12:
        printf("December\n");
        printf("Number of days = 31\n");
        break;
        default:
        printf("ENTER A VALID MONTH BETWEEN (1-12)");
    }
    }
   