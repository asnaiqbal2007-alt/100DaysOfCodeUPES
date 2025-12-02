/*Show that enums store integers by printing assigned values.*/
#include <stdio.h>
#include <stdlib.h>

enum Priority {
    LOW = 1,
    MEDIUM = 5,
    HIGH = 10,
    CRITICAL = 20
};

void demonstrateEnumAsInteger();

int main(){
    demonstrateEnumAsInteger();
    
    return 0;
}

void demonstrateEnumAsInteger(){
    enum Priority p1 = LOW;
    enum Priority p2 = HIGH;
    int sum = 0;
    
    printf("Demonstrating Enums Store Integers:\n");
    printf("----------------------------\n");
    
    printf("LOW = %d\n", LOW);
    printf("MEDIUM = %d\n", MEDIUM);
    printf("HIGH = %d\n", HIGH);
    printf("CRITICAL = %d\n", CRITICAL);
    
    printf("----------------------------\n");
    printf("Arithmetic Operations:\n");
    
    sum = p1 + p2;
    printf("LOW + HIGH = %d + %d = %d\n", p1, p2, sum);
    
    printf("----------------------------\n");
    printf("This proves enums are stored as integers!\n");
}