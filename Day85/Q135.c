/*Assign explicit values starting from 10 and print them.*/
#include <stdio.h>
#include <stdlib.h>

enum Numbers {
    FIRST = 10,
    SECOND,
    THIRD,
    FOURTH,
    FIFTH
};

void displayValues();

int main(){
    displayValues();
    
    return 0;
}

void displayValues(){
    printf("Enum Values Starting from 10:\n");
 
    
    printf("FIRST = %d\n", FIRST);
    printf("SECOND = %d\n", SECOND);
    printf("THIRD = %d\n", THIRD);
    printf("FOURTH = %d\n", FOURTH);
    printf("FIFTH = %d\n", FIFTH);
    
 
}