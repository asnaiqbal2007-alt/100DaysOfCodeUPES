/*Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.*/
#include <stdio.h>
#include <stdlib.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

void displayRoleMessage(enum Role role);

int main(){
    int choice = 0;
    enum Role userRole;
    
    printf("User Role Selection:\n");
    printf("----------------------------\n");
    printf("0 - ADMIN\n");
    printf("1 - USER\n");
    printf("2 - GUEST\n");
    printf("----------------------------\n");
    printf("Enter role (0/1/2): ");
    scanf("%d", &choice);
    
    userRole = choice;
    
    displayRoleMessage(userRole);
    
    return 0;
}

void displayRoleMessage(enum Role role){
    printf("----------------------------\n");
    
    if(role == ADMIN){
        printf("Role: ADMIN\n");
        printf("Access Level: Full access to all features\n");
        printf("Permissions: Create, Read, Update, Delete\n");
    }
    else if(role == USER){
        printf("Role: USER\n");
        printf("Access Level: Standard access\n");
        printf("Permissions: Read, Update own content\n");
    }
    else if(role == GUEST){
        printf("Role: GUEST\n");
        printf("Access Level: Limited access\n");
        printf("Permissions: Read only\n");
    }
    else{
        printf("Invalid role!\n");
    }
    
    printf("----------------------------\n");
}