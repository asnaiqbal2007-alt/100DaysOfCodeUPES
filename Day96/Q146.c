/*Create Employee structure with nested Date structure for joining date and print details.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int emp_id;
    float salary;
    struct Date joiningDate;
};

void inputEmployee(struct Employee *e);
void displayEmployee(struct Employee e);

int main(){
    struct Employee emp;
    
    inputEmployee(&emp);
    displayEmployee(emp);
    
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
    
    printf("Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &e->joiningDate.day, &e->joiningDate.month, &e->joiningDate.year);
}

void displayEmployee(struct Employee e){
    printf("----------------------------\n");
    printf("Employee Details:\n");
    printf("----------------------------\n");
    printf("Name: %s\n", e.name);
    printf("Employee ID: %d\n", e.emp_id);
    printf("Salary: %.2f\n", e.salary);
    printf("Joining Date: %02d/%02d/%d\n", e.joiningDate.day, e.joiningDate.month, e.joiningDate.year);
    printf("----------------------------\n");
}