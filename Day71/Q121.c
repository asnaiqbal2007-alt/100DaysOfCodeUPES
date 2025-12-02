/*Write a C program that creates a text file named info.txt in write mode. The program should take the user's name and age as input, 
and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inputName(char *name, int size);
void writeToFile(char name[], int age);

int main(){
    int size = 0;
    int age = 0;
    
    printf("Enter the size of name: ");
    scanf("%d", &size);
    getchar(); 
    char *name = NULL;
    name = (char*)malloc((size + 1) * sizeof(char));
    
    inputName(name, size);
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    writeToFile(name, age);
    
    free(name);
    return 0;
}

void inputName(char *name, int size){
    printf("Enter your name: ");
    fgets(name, size + 1, stdin);
    name[strcspn(name, "\n")] = '\0'; 
}

void writeToFile(char name[], int age){
    FILE *file = NULL;
    
    file = fopen("info.txt", "w");
    
    if(file == NULL){
        printf("Error opening file!\n");
        return;
    }
    else{
        fprintf(file, "Name: %s\n", name);
        fprintf(file, "Age: %d\n", age);
        
        fclose(file);
        
        printf("Data successfully saved to info.txt\n");
    }
}