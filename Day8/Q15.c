// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>
void CASE(char alp);
int main(){
    char ALP;
    printf("ENTER YOUR CHARACTER:\n");
    scanf("%c",&ALP);
    CASE(ALP);
    return 0;

}
void CASE(char alp){
    if(alp>='a'&& alp<='z'){
        printf("YOUR ENTERED ALPHABET IS SMALL");
    }
    else if(alp>='A'&& alp<='Z'){
        printf("YOUR ENTERED ALPHABET IS CAPITAL");
    }
    else{
        printf("YOUR ENTERED ALPHABET IS A SPECIAL CHARACTER");
    }

}