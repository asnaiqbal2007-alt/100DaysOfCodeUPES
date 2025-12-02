/*Write a program to take a string input. Change it to sentence case.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void input(char *str, int size);
void display(char str[]);
void toSentenceCase(char str[]);

int main(){
    int size = 0;
    
    printf("Enter the size of string: ");
    scanf("%d", &size);
    getchar(); 
    
    char *str = NULL;
    str = (char*)malloc((size + 1) * sizeof(char));
    
    input(str, size);
    
    printf("Original string:\n");
    display(str);
    
    toSentenceCase(str);
    
    printf("Sentence case string:\n");
    display(str);
    
    free(str);
    return 0;
}

void input(char *str, int size){
    printf("Enter the string:\n");
    fgets(str, size + 1, stdin);
    str[strcspn(str, "\n")] = '\0'; 
}

void display(char str[]){
    printf("%s\n", str);
}

void toSentenceCase(char str[]){
    int len = strlen(str);
    int newSentence = 1; 
    
    for(int i = 0; i < len; i++){
        if(newSentence == 1 && isalpha(str[i])){
            str[i] = toupper(str[i]);
            newSentence = 0;
        }
        else if(isalpha(str[i])){
            str[i] = tolower(str[i]);
        }
        else if(str[i] == '.' || str[i] == '!' || str[i] == '?'){
            newSentence = 1; 
        }
        else{
            continue;
        }
    }
}