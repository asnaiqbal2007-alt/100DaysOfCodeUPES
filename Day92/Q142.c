/*Store details of 5 students in an array of structures and print all.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void inputStudents(struct Student students[], int n);
void displayStudents(struct Student students[], int n);

int main(){
    int n = 5;
    struct Student students[5];
    
    inputStudents(students, n);
    displayStudents(students, n);
    
    return 0;
}

void inputStudents(struct Student students[], int n){
    printf("Enter details for %d students:\n", n);
    printf("----------------------------\n");
    
    for(int i = 0; i < n; i++){
        printf("Student %d:\n", i + 1);
        
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
        
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        getchar(); 
        
        printf("\n");
    }
}

void displayStudents(struct Student students[], int n){
    printf("All Student Details:\n");
    printf("----------------------------\n");
    
    for(int i = 0; i < n; i++){
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}