/*Store employee data in a binary file using fwrite() and read using fread().*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    char name[50];
    int emp_id;
    float salary;
};

void inputEmployee(struct Employee *e);
void writeToFile(struct Employee e, char filename[]);
void readFromFile(char filename[]);

int main(){
    char filename[] = "employee.dat";
    struct Employee emp;
    
    inputEmployee(&emp);
    writeToFile(emp, filename);
    readFromFile(filename);
    
    return 0;
}

void inputEmployee(struct Employee *e){
    printf("Enter employee details:\n");
    printf("----------------------------\n");
    
    printf("Name: ");
    fgets(e->name, sizeof(e->name), stdin);
    e->name[strcspn(e->name, "\n")] = '\0';
    
    printf("Employee ID: ");
    scanf("%d", &e->emp_id);
    
    printf("Salary: ");
    scanf("%f", &e->salary);
}

void writeToFile(struct Employee e, char filename[]){
    FILE *file = NULL;
    
    file = fopen(filename, "wb");
    
    if(file == NULL){
        printf("Error opening file for writing!\n");
        return;
    }
    else{
        fwrite(&e, sizeof(struct Employee), 1, file);
        fclose(file);
        printf("----------------------------\n");
        printf("Data written to binary file successfully!\n");
    }
}

void readFromFile(char filename[]){
    FILE *file = NULL;
    struct Employee e;
    
    file = fopen(filename, "rb");
    
    if(file == NULL){
        printf("Error opening file for reading!\n");
        return;
    }
    else{
        fread(&e, sizeof(struct Employee), 1, file);
        fclose(file);
        
        printf("----------------------------\n");
        printf("Data read from binary file:\n");
        printf("----------------------------\n");
        printf("Name: %s\n", e.name);
        printf("Employee ID: %d\n", e.emp_id);
        printf("Salary: %.2f\n", e.salary);
        printf("----------------------------\n");
    }
}