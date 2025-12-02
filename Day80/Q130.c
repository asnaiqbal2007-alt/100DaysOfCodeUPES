/*Store multiple student records (name, roll number, marks) into a file using fprintf(). 
Then read them using fscanf() and display each record.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void writeRecords(char filename[], int n);
void readRecords(char filename[]);

int main(){
    char filename[] = "students.txt";
    int n = 0;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar(); 
    
    writeRecords(filename, n);
    readRecords(filename);
    
    return 0;
}

void writeRecords(char filename[], int n){
    FILE *file = NULL;
    
    file = fopen(filename, "w");
    
    if(file == NULL){
        printf("Error opening file!\n");
        return;
    }
    else{
        char name[100];
        int rollNo = 0;
        float marks = 0.0;
        
        printf("Enter student details:\n");
        printf("----------------------------\n");
        
        for(int i = 0; i < n; i++){
            printf("Student %d:\n", i + 1);
            
            printf("Name: ");
            fgets(name, sizeof(name), stdin);
            name[strcspn(name, "\n")] = '\0'; 
            
            printf("Roll Number: ");
            scanf("%d", &rollNo);
            
            printf("Marks: ");
            scanf("%f", &marks);
            getchar(); 
            
            fprintf(file, "%s %d %.2f\n", name, rollNo, marks);
            printf("\n");
        }
        
        fclose(file);
        printf("Records saved successfully to %s\n", filename);
        printf("----------------------------\n\n");
    }
}

void readRecords(char filename[]){
    FILE *file = NULL;
    
    file = fopen(filename, "r");
    
    if(file == NULL){
        printf("Error opening file!\n");
        return;
    }
    else{
        char name[100];
        int rollNo = 0;
        float marks = 0.0;
        int count = 0;
        
        printf("Student Records:\n");
        printf("----------------------------\n");
        
        while(fscanf(file, "%s %d %f", name, &rollNo, &marks) == 3){
            count++;
            printf("Student %d:\n", count);
            printf("Name: %s\n", name);
            printf("Roll Number: %d\n", rollNo);
            printf("Marks: %.2f\n", marks);
            printf("\n");
        }
        
        fclose(file);
        
        if(count == 0){
            printf("No records found in the file.\n");
        }
        else{
            printf("Total records read: %d\n", count);
        }
    }
}