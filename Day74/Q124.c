/*Take two filenames from the user – a source file and a destination file. 
Copy all the content from the source file to the destination file using fgetc() and fputc().*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inputFilename(char *filename, int size, char message[]);
void copyFile(char source[], char destination[]);

int main(){
    int size1 = 0, size2 = 0;
    
    printf("Enter the size of source filename: ");
    scanf("%d", &size1);
    getchar(); 
    printf("Enter the size of destination filename: ");
    scanf("%d", &size2);
    getchar();
    
    char *source = NULL;
    char *destination = NULL;
    
    source = (char*)malloc((size1 + 1) * sizeof(char));
    destination = (char*)malloc((size2 + 1) * sizeof(char));
    
    inputFilename(source, size1, "Enter source filename: ");
    inputFilename(destination, size2, "Enter destination filename: ");
    
    copyFile(source, destination);
    
    free(source);
    free(destination);
    return 0;
}

void inputFilename(char *filename, int size, char message[]){
    printf("%s", message);
    fgets(filename, size + 1, stdin);
    filename[strcspn(filename, "\n")] = '\0'; 
}

void copyFile(char source[], char destination[]){
    FILE *sourceFile = NULL;
    FILE *destFile = NULL;
    
    sourceFile = fopen(source, "r");
    
    if(sourceFile == NULL){
        printf("Error opening source file!\n");
        return;
    }
    else{
        destFile = fopen(destination, "w");
        
        if(destFile == NULL){
            printf("Error opening destination file!\n");
            fclose(sourceFile);
            return;
        }
        else{
            char ch;
            int charCount = 0;
            
            while((ch = fgetc(sourceFile)) != EOF){
                fputc(ch, destFile);
                charCount++;
            }
            
            fclose(sourceFile);
            fclose(destFile);
            
            printf("File copied successfully!\n");
            printf("Total characters copied: %d\n", charCount);
        }
    }
}