/*Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). 
The program should print all the lines to the console until EOF (end of file) is reached.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void readFromFile(char filename[]);

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
    
    readFromFile(filename);
    
    free(filename);
    return 0;
}

void readFromFile(char filename[]){
    FILE *file = NULL;
    
    file = fopen(filename, "r");
    
    if(file == NULL){
        printf("Error opening file!\n");
        return;
    }
    else{
        char line[256];
        
        printf("Contents of %s:\n", filename);
        printf("----------------------------\n");
        
        while(fgets(line, sizeof(line), file) != NULL){
            printf("%s", line);
        }
        
        printf("----------------------------\n");
        printf("End of file reached.\n");
        
        fclose(file);
    }
}