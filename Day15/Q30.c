//Write a program to reverse a given number.
#include <stdio.h>
#include <string.h>
void rev(char arr[]);
int main(){
    char num[500];
    fgets(num,499,stdin);//INPUTTING THE NUMBER AS A STRING ARRAY
    size_t c = strlen(num);    /*HERE REMOVING THE NEWLINE CHARACTER WE GET FROM FGETS JUST BEFORE \0*/
    if(c>0 && num[c-1]=='\n'){
        num[c-1]='\0';
    }

    rev(num);
    puts(num);
    return 0;


}
void rev(char arr[]){
    size_t c = strlen(arr); //size_t is used for unsigned int and it can store any amount of value
    for(int i = 0;i<c/2;i++){//REVERSING THE STRING ARRAY USING SIMPLE ARRAY LOGIC LOOP CHALANA HAI TILL N/2 THEN ARR I AND ARR N-I-1 HERE N IS THE LENGHT OF THE ARRAY SIMPLE ME HAM FUNCTION ME DEFINE KARTE HAI BUT IN THIS WE WILL HAVE TO USE STRLEN
        char curr = arr[i];
        char reversal = arr[c-i-1];
        arr[i]= reversal;
        arr[c-i-1]= curr;

    }
}
