/*Define a struct with enum Gender and print person's gender.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

void inputPerson(struct Person *p);
void displayPerson(struct Person p);

int main(){
    struct Person person;
    
    inputPerson(&person);
    displayPerson(person);
    
    return 0;
}

void inputPerson(struct Person *p){
    int genderChoice = 0;
    
    printf("Enter person details:\n");
    printf("----------------------------\n");
    
    printf("Name: ");
    fgets(p->name, sizeof(p->name), stdin);
    p->name[strcspn(p->name, "\n")] = '\0';
    
    printf("Age: ");
    scanf("%d", &p->age);
    
    printf("Gender (0-MALE, 1-FEMALE, 2-OTHER): ");
    scanf("%d", &genderChoice);
    
    p->gender = genderChoice;
}

void displayPerson(struct Person p){
    printf("----------------------------\n");
    printf("Person Details:\n");
    printf("----------------------------\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    
    if(p.gender == MALE){
        printf("Gender: MALE\n");
    }
    else if(p.gender == FEMALE){
        printf("Gender: FEMALE\n");
    }
    else if(p.gender == OTHER){
        printf("Gender: OTHER\n");
    }
    else{
        printf("Gender: Invalid\n");
    }
    
    printf("----------------------------\n");
}