/*Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.*/
#include <stdio.h>
#include <stdlib.h>

enum Operation {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

void performOperation(enum Operation op, int a, int b);

int main(){
    int choice = 0;
    int num1 = 0, num2 = 0;
    enum Operation selectedOp;
    
    printf("Calculator Menu:\n");
    printf("----------------------------\n");
    printf("1 - ADD\n");
    printf("2 - SUBTRACT\n");
    printf("3 - MULTIPLY\n");
    printf("----------------------------\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);
    
    selectedOp = choice;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    performOperation(selectedOp, num1, num2);
    
    return 0;
}

void performOperation(enum Operation op, int a, int b){
    int result = 0;
    
    printf("----------------------------\n");
    
    switch(op){
        case ADD:
            result = a + b;
            printf("Operation: ADD\n");
            printf("%d + %d = %d\n", a, b, result);
            break;
            
        case SUBTRACT:
            result = a - b;
            printf("Operation: SUBTRACT\n");
            printf("%d - %d = %d\n", a, b, result);
            break;
            
        case MULTIPLY:
            result = a * b;
            printf("Operation: MULTIPLY\n");
            printf("%d * %d = %d\n", a, b, result);
            break;
            
        default:
            printf("Invalid operation!\n");
            break;
    }
    
    printf("----------------------------\n");
}