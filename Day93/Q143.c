/*Find and print the student with the highest marks.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void inputStudents(struct Student students[], int n);
void findTopStudent(struct Student students[], int n);

int main(){
    int n = 0;
    
    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();
    
    struct Student *students = NULL;
    students = (struct Student*)malloc(n * sizeof(struct Student));
    
    inputStudents(students, n);
    findTopStudent(students, n);
    
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
        getchar();
        
        printf("\n");
    }
}

void findTopStudent(struct Student students[], int n){
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
    
    printf("----------------------------\n");
    printf("Student with Highest Marks:\n");
    printf("----------------------------\n");
    printf("Name: %s\n", students[topIndex].name);
    printf("Roll Number: %d\n", students[topIndex].roll_no);
    printf("Marks: %.2f\n", students[topIndex].marks);
    printf("----------------------------\n");
}