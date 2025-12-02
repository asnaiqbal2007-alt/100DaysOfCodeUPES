/*Take two structs as input and check if they are identical.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void inputStudent(struct Student *s, int num);
void compareStudents(struct Student s1, struct Student s2);

int main(){
    struct Student student1, student2;
    
    inputStudent(&student1, 1);
    inputStudent(&student2, 2);
    compareStudents(student1, student2);
    
    return 0;
}

void inputStudent(struct Student *s, int num){
    printf("Enter details for Student %d:\n", num);
    printf("----------------------------\n");
    
    printf("Name: ");
    fgets(s->name, sizeof(s->name), stdin);
    s->name[strcspn(s->name, "\n")] = '\0';
    
    printf("Roll Number: ");
    scanf("%d", &s->roll_no);
    
    printf("Marks: ");
    scanf("%f", &s->marks);
    getchar(); 
    printf("\n");
}

void compareStudents(struct Student s1, struct Student s2){
    printf("----------------------------\n");
    printf("Comparison Result:\n");
    printf("----------------------------\n");
    
    if(strcmp(s1.name, s2.name) == 0 && s1.roll_no == s2.roll_no && s1.marks == s2.marks){
        printf("The two students are IDENTICAL\n");
    }
    else{
        printf("The two students are NOT IDENTICAL\n");
        
        if(strcmp(s1.name, s2.name) != 0){
            printf("Names differ\n");
        }
        else{
           
        }
        
        if(s1.roll_no != s2.roll_no){
            printf("Roll numbers differ\n");
        }
        else{
            
        }
        
        if(s1.marks != s2.marks){
            printf("Marks differ\n");
        }
        else{
            
        }
    }
    
    printf("----------------------------\n");
}