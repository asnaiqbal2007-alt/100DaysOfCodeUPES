/*Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.*/
#include <stdio.h>
#include <stdlib.h>

enum Days {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

void displayDays();

int main(){
    displayDays();
    
    return 0;
}

void displayDays(){
    printf("Days of the Week:\n");

    
    printf("SUNDAY = %d\n", SUNDAY);
    printf("MONDAY = %d\n", MONDAY);
    printf("TUESDAY = %d\n", TUESDAY);
    printf("WEDNESDAY = %d\n", WEDNESDAY);
    printf("THURSDAY = %d\n", THURSDAY);
    printf("FRIDAY = %d\n", FRIDAY);
    printf("SATURDAY = %d\n", SATURDAY);
    

}