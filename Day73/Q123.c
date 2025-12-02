/*Read a text file and count the total number of characters, words, and lines. 
A word is defined as a sequence of non-space characters separated by spaces or newlines.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void readAndCount(char filename[]);

int main(){
    int size = 0;
    
    printf("Enter the size of filename: ");
    scanf("%d", &size);
    getchar();
    char *filename = NULL;
    filename = (char*)malloc((size + 1) * sizeof(char));
    
    printf("Enter the filename: ");
    fgets(filename, size + 1, stdin);
    filename[strcspn(filename, "\n")] = '\0';
    
    readAndCount(filename);
    
    free(filename);
    return 0;
}

void readAndCount(char filename[]){
    FILE *file = NULL;
    
    file = fopen(filename, "r");
    
    if(file == NULL){
        printf("Error opening file!\n");
        return;
    }
    else{
        int charCount = 0;
        int wordCount = 0;
        int lineCount = 0;
        int inWord = 0; 
        char ch;
        
        while((ch = fgetc(file)) != EOF){
            charCount++;
            
            if(ch == '\n'){
                lineCount++;
                if(inWord == 1){
                    wordCount++;
                    inWord = 0;
                }
                else{
                    continue;
                }
            }
            else if(isspace(ch)){
                if(inWord == 1){
                    wordCount++;
                    inWord = 0;
                }
                else{
                    continue;
                }
            }
            else{
                inWord = 1;
            }
        }
        
        if(inWord == 1){
            wordCount++;
        }
      
        fclose(file);
        
      
      
        printf("Total Characters: %d\n", charCount);
        printf("Total Words: %d\n", wordCount);
        printf("Total Lines: %d\n", lineCount);
    }
}