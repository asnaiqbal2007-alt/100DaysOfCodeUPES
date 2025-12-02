/*Print all enum names and integer values using a loop.*/
#include <stdio.h>
#include <stdlib.h>

enum Colors {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE
};

void displayEnumValues();

int main(){
    displayEnumValues();
    
    return 0;
}

void displayEnumValues(){
    printf("Enum Names and Values:\n");
    printf("----------------------------\n");
    
    char *colorNames[] = {"RED", "GREEN", "BLUE", "YELLOW", "ORANGE"};
    int colorValues[] = {RED, GREEN, BLUE, YELLOW, ORANGE};
    int size = 5;
    
    for(int i = 0; i < size; i++){
        printf("%s = %d\n", colorNames[i], colorValues[i]);
    }
    
    printf("----------------------------\n");
}