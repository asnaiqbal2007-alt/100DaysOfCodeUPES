//Check if two strings are anagrams of each other.
/*
ffor 2 strings to be anagrams:
can simply sort both strings alphabetically 
after checking the number of characters in the string and use strcmp
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
//scrapped below one because of errors but kept for future reference
/*int ana(char arr1[],char arr2[]);
int main(){
    char arr1[101],arr2[101];
    printf("Enter string 1: ");
    fgets(arr1,101,stdin);
    int l=strlen(arr1);
    
    if(arr1[l-1] == '\n'){
        arr1[l-1] = '\0';
    }

    printf("Enter string 2: ");
    fgets(arr2,101,stdin);
    int l2=strlen(arr2);
    
    if(arr2[l2-1] == '\n'){
        arr2[l2-1] = '\0';
    }

    if(ana(arr1,arr2)==1){
        printf("Anagrams.\n");
    }
    else{
        printf("Not Anagrams.\n");
    }
    return 0;
}
int ana(char arr1[],char arr2[]){
    int isAna = 1;
    int l1 = strlen(arr1);
    int l2 = strlen(arr2);
    if(l1==l2){
        for(int i = 0;arr1[i]!='\0';i++){
            for(int j=0;arr2[j]!='\0';j++){
                if(arr1[i]!=arr2[j]){
                    isAna=0;
                    return isAna;
                }
            }
        }
    }
    else{
        isAna = 0;
        return isAna;
    }

    
}
*/


void sort(char arr[]);
int ana(char arr1[], char arr2[]);

int main(){
    char arr1[101], arr2[101];
    printf("Enter string 1: ");
    fgets(arr1,101,stdin);
    int l = strlen(arr1);
    if(arr1[l-1] == '\n'){
        arr1[l-1] = '\0';
    }

    printf("Enter string 2: ");
    fgets(arr2,101,stdin);
    int l2 = strlen(arr2);
    if(arr2[l2-1] == '\n'){
        arr2[l2-1] = '\0';
    }

    if(ana(arr1, arr2) == 1){
        printf("Anagrams.\n");
    }
    else{
        printf("Not Anagrams.\n");
    }

    return 0;
}

//tried using bubblesort but encountered some errors, also tried using qsort but didnt understand the syntax
void sort(char arr[]){
    int len = strlen(arr);
    for(int i=0; i<len-1; i++){
        for(int j=0; j<len-i-1; j++){
            if(arr[j] > arr[j+1]){
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int ana(char arr1[], char arr2[]){
    if(strlen(arr1) != strlen(arr2)){
        return 0;
    }
    sort(arr1);
    sort(arr2);
    if(strcmp(arr1, arr2) == 0){
        return 1;
    }
    else{
        return 0;
    }
}