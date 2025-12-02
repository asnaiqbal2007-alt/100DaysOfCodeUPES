/*Create an enum for months and print how many days each month has.*/
#include <stdio.h>
#include <stdlib.h>

enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

void displayMonthDays(enum Month month);

int main(){
    printf("Days in Each Month:\n");
    printf("----------------------------\n");
    
    for(int i = JANUARY; i <= DECEMBER; i++){
        displayMonthDays(i);
    }
    
    return 0;
}

void displayMonthDays(enum Month month){
    if(month == JANUARY){
        printf("JANUARY: 31 days\n");
    }
    else if(month == FEBRUARY){
        printf("FEBRUARY: 28/29 days\n");
    }
    else if(month == MARCH){
        printf("MARCH: 31 days\n");
    }
    else if(month == APRIL){
        printf("APRIL: 30 days\n");
    }
    else if(month == MAY){
        printf("MAY: 31 days\n");
    }
    else if(month == JUNE){
        printf("JUNE: 30 days\n");
    }
    else if(month == JULY){
        printf("JULY: 31 days\n");
    }
    else if(month == AUGUST){
        printf("AUGUST: 31 days\n");
    }
    else if(month == SEPTEMBER){
        printf("SEPTEMBER: 30 days\n");
    }
    else if(month == OCTOBER){
        printf("OCTOBER: 31 days\n");
    }
    else if(month == NOVEMBER){
        printf("NOVEMBER: 30 days\n");
    }
    else if(month == DECEMBER){
        printf("DECEMBER: 31 days\n");
    }
    else{
        printf("Invalid month\n");
    }
}