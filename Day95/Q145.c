/*Return a structure containing top student's details from a function.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void inputStudents(struct Student students[], int n);
struct Student getTopStudent(struct Student students[], int n);
void displayStudent(struct Student s);

int main(){
    int n = 0;
    
    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();
    
    struct Student *students = NULL;
    students = (struct Student*)malloc(n * sizeof(struct Student));
    
    inputStudents(students, n);
    
    struct Student topStudent = getTopStudent(students, n);
    
    printf("----------------------------\n");
    printf("Top Student (Returned from Function):\n");
    displayStudent(topStudent);
    
    free(students);
    return 0;
}

void inputStudents(struct Student students[], int n){
    printf("----------------------------\n");
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
        getchar(); // consume newline
        
        printf("\n");
    }
}

struct Student getTopStudent(struct Student students[], int n){
    int topIndex = 0;
    float maxMarks = students[0].marks;
    
    for(int i = 1; i < n; i++){
        if(students[i].marks > maxMarks){
            maxMarks = students[i].marks;
            topIndex = i;
        }
        else{
            continue;
        }
    }
    
    return students[topIndex];
}

void displayStudent(struct Student s){
    printf("----------------------------\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
    printf("----------------------------\n");
}