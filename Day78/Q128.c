/*Read a text file and count how many vowels and consonants are in the file. 
Ignore digits and special characters.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void inputFilename(char *filename, int size);
void countVowelsConsonants(char filename[]);
int isVowel(char ch);

int main(){
    int size = 0;
    
    printf("Enter the size of filename: ");
    scanf("%d", &size);
    getchar(); 
    
    char *filename = NULL;
    filename = (char*)malloc((size + 1) * sizeof(char));
    
    inputFilename(filename, size);
    countVowelsConsonants(filename);
    
    free(filename);
    return 0;
}

void inputFilename(char *filename, int size){
    printf("Enter the filename: ");
    fgets(filename, size + 1, stdin);
    filename[strcspn(filename, "\n")] = '\0'; 
}

int isVowel(char ch){
    ch = tolower(ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        return 1;
    }
    else{
        return 0;
    }
}

void countVowelsConsonants(char filename[]){
    FILE *file = NULL;
    
    file = fopen(filename, "r");
    
    if(file == NULL){
        printf("Error opening file!\n");
        return;
    }
    else{
        int vowelCount = 0;
        int consonantCount = 0;
        char ch;
        
        while((ch = fgetc(file)) != EOF){
            if(isalpha(ch)){
                if(isVowel(ch) == 1){
                    vowelCount++;
                }
                else{
                    consonantCount++;
                }
            }
            else{
                continue; 
            }
        }
        
        fclose(file);
        
      
        printf("Total Vowels: %d\n", vowelCount);
        printf("Total Consonants: %d\n", consonantCount);
    }
}