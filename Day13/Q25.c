//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int calc(int a, int b, char c);
int main(){
    int x,y;
    char C;
    printf("ENTER YOUR 1ST NUMBER:");
    scanf("%d",&x);
    printf("ENTER YOUR 2ND NUMBER:");
    scanf("%d",&y);
    printf("ENTER YOUR OPERATOR:");
    getchar();//OK THIS IS SOMETHING NEW ALWAYS USE GET CHAR AFTER TAKING 2 INTEGER INPUTS TO CLEAR THE NEWLINE CHAR INPUT;
    scanf("%c",&C);
    printf("YOUR ANSWER IS : %d",calc(x,y,C));
    return 0;
}

int calc(int a, int b, char c){
    switch (c){
        case '+':
        return a+b;//return exits the loop so no need for break

       
         case '-':
        return a-b;
       
         case '*':
        return a*b;
        
        case '/':
        if(b!=0){
            return a/b;
        }
       
        case '%':
        if(b!=0){
            return a%b;
        }
        break;
        default:
            printf("ERROR: Invalid operator '%c'\n", c);
            return 0;//IF YOU WANNA PRINT A MESSAGE IN INT TYPE RETURN FUNCTION USE RETURN 0 | T-T |


    }
}

