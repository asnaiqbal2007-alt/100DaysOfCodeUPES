/*Ask the user for a filename. Check if it exists by trying to open it in read mode. 
If the file pointer is NULL, print an error message; otherwise, read and display its content.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inputFilename(char *filename, int size);
void checkAndRead(char filename[]);

int main(){
    int size = 0;
    
    printf("Enter the size of filename: ");
    scanf("%d", &size);
    getchar(); 
    
    char *filename = NULL;
    filename = (char*)malloc((size + 1) * sizeof(char));
    
    inputFilename(filename, size);
    checkAndRead(filename);
    
    free(filename);
    return 0;
}

void inputFilename(char *filename, int size){
    printf("Enter the filename: ");
    fgets(filename, size + 1, stdin);
    filename[strcspn(filename, "\n")] = '\0'; 
}

void checkAndRead(char filename[]){
    FILE *file = NULL;
    
    file = fopen(filename, "r");
    
    if(file == NULL){
        printf("Error: File '%s' does not exist or cannot be opened!\n", filename);
        return;
    }
    else{
        printf("File '%s' exists.\n", filename);

        printf("Contents of file:\n");
     
        
        char line[256];
        
        while(fgets(line, sizeof(line), file) != NULL){
            printf("%s", line);
        }
        
        
        printf("File read successfully.\n");
        
        fclose(file);
    }
}