// Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
const char* type(char alp);//USED CONST CHAR* TO GET THE RETURN TYPE STRING
int main(){
    char ALP;
    printf("ENTER YOUR ALPHABET");
    scanf("%c",&ALP);
    printf(" YOUR ENTERED CHARACTER IS %s",type(ALP));// AS ITS A SHORT STRING WE ARE USING %S IF WOULD HAVE BEEN A LONG STRING I WOULD HAVE USED %LS
    return 0;


}
const char* type(char alp){
    int arr[10]={'a','e','i','o','u','A','E','I','O','U'};
    for(int i = 0;i<10;i++){
        if(alp==arr[i]){//CHECKS IF VALUE OF INPUT CHARACTER FORM USER MATCHES FOR EACH VOWEL STORED IN THE ARRAW FROM 0TH INDEX TO 9TH INDEX 
            return "VOWEL";//WE USE DOUBLE QUOTES FOR STRINGS
        }
        else{
            return "CONSONANT";
        }
    }
    
}