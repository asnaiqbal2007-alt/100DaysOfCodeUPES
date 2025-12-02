/*Define a structure Student with name, roll_no, and marks, then read and print one student's data.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void inputStudent(struct Student *s);
void displayStudent(struct Student s);

int main(){
    struct Student student;
    
    inputStudent(&student);
    displayStudent(student);
    
    return 0;
}

void inputStudent(struct Student *s){
    printf("Enter student details:\n");
    printf("----------------------------\n");
    
    printf("Name: ");
    fgets(s->name, sizeof(s->name), stdin);
    s->name[strcspn(s->name, "\n")] = '\0';
    
    printf("Roll Number: ");
    scanf("%d", &s->roll_no);
    
    printf("Marks: ");
    scanf("%f", &s->marks);
}

void displayStudent(struct Student s){
    printf("----------------------------\n");
    printf("Student Details:\n");
    printf("----------------------------\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
    printf("----------------------------\n");
}