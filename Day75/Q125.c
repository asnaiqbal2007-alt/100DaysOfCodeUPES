/*Open an existing file in append mode and allow the user to enter a new line of text. 
Append the text at the end without overwriting existing content.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inputFilename(char *filename, int size);
void inputText(char *text, int size);
void appendToFile(char filename[], char text[]);

int main(){
    int size1 = 0, size2 = 0;
    
    printf("Enter the size of filename: ");
    scanf("%d", &size1);
    getchar(); 
    
    printf("Enter the size of text: ");
    scanf("%d", &size2);
    getchar(); 
    
    char *filename = NULL;
    char *text = NULL;
    
    filename = (char*)malloc((size1 + 1) * sizeof(char));
    text = (char*)malloc((size2 + 1) * sizeof(char));
    
    inputFilename(filename, size1);
    inputText(text, size2);
    
    appendToFile(filename, text);
    
    free(filename);
    free(text);
    return 0;
}

void inputFilename(char *filename, int size){
    printf("Enter the filename: ");
    fgets(filename, size + 1, stdin);
    filename[strcspn(filename, "\n")] = '\0'; 
}

void inputText(char *text, int size){
    printf("Enter the text to append: ");
    fgets(text, size + 1, stdin);
    text[strcspn(text, "\n")] = '\0'; 
}

void appendToFile(char filename[], char text[]){
    FILE *file = NULL;
    
    file = fopen(filename, "a");
    
    if(file == NULL){
        printf("Error opening file!\n");
        return;
    }
    else{
        fprintf(file, "%s\n", text);
        
        fclose(file);
        
        printf("Text appended successfully to %s\n", filename);
    }
}