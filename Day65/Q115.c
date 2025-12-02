/*Write a Program to take two strings s and t as inputs (assume all characters are lowercase). 
The task is to determine if s and t are valid anagrams, meaning they contain the same characters 
with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input(char *str, int size);
void sort(char str[], int n);
void checkAnagram(char s[], char t[]);

int main(){
    int size1 = 0, size2 = 0;
    
    printf("Enter the size of first string: ");
    scanf("%d", &size1);
    getchar(); // consume newline
    
    printf("Enter the size of second string: ");
    scanf("%d", &size2);
    getchar(); // consume newline
    
    char *s = NULL;
    char *t = NULL;
    
    s = (char*)malloc((size1 + 1) * sizeof(char));
    t = (char*)malloc((size2 + 1) * sizeof(char));
    
    printf("Enter first string: ");
    input(s, size1);
    
    printf("Enter second string: ");
    input(t, size2);
    
    checkAnagram(s, t);
    
    free(s);
    free(t);
    return 0;
}

void input(char *str, int size){
    fgets(str, size + 1, stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline if present
}

void sort(char str[], int s){
    for(int i = 0; i < s; i++){
        for(int j = i + 1; j < s; j++){
            if(str[j] < str[i]){
                char temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }
            else{
                continue;
            }
        }
    }
}

void checkAnagram(char s[], char t[]){
    int len1 = strlen(s);
    int len2 = strlen(t);
    
    if(len1 != len2){
        printf("Not Anagram");
        return;
    }
    
    sort(s, len1);
    sort(t, len2);
    
    for(int i = 0; i < len1; i++){
        if(s[i] != t[i]){
            printf("Not Anagram");
            return;
        }
    }
    
    printf("Anagram");
}