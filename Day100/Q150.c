/*Use pointer to struct to modify and display data using -> operator.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
    char name[50];
    int roll_no;
    float marks;
} stu;

void modifyStudent(stu *s, char name[], int roll, float marks);
void displayStudent(stu *s);

int main(){
    stu student;
    stu *ptr = NULL;
    
    ptr = &student;
    
    char name[50];
    int roll = 0;
    float marks = 0.0;
    
    printf("Enter student details:\n");
    printf("Name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    
    printf("Roll Number: ");
    scanf("%d", &roll);
    
    printf("Marks: ");
    scanf("%f", &marks);
    
    modifyStudent(ptr, name, roll, marks);
    displayStudent(ptr);
    
    return 0;
}

void modifyStudent(stu *s, char name[], int roll, float marks){
    strcpy(s->name, name);
    s->roll_no = roll;
    s->marks = marks;
}

void displayStudent(stu *s){
    printf("Modified Data: Name: %s | Roll: %d | Marks: %.0f\n", s->name, s->roll_no, s->marks);
}