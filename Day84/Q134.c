/*Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.*/
#include <stdio.h>
#include <stdlib.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

void displayStatus(enum Status status);

int main(){
    int choice = 0;
    enum Status currentStatus;
    
    printf("Status Options:\n");
    printf("----------------------------\n");
    printf("0 - SUCCESS\n");
    printf("1 - FAILURE\n");
    printf("2 - TIMEOUT\n");
    printf("----------------------------\n");
    printf("Enter status (0/1/2): ");
    scanf("%d", &choice);
    
    currentStatus = choice;
    
    displayStatus(currentStatus);
    
    return 0;
}

void displayStatus(enum Status status){
    printf("----------------------------\n");
    
    if(status == SUCCESS){
        printf("Status: SUCCESS\n");
        printf("Message: Operation completed successfully!\n");
    }
    else if(status == FAILURE){
        printf("Status: FAILURE\n");
        printf("Message: Operation failed. Please try again.\n");
    }
    else if(status == TIMEOUT){
        printf("Status: TIMEOUT\n");
        printf("Message: Operation timed out. Please check connection.\n");
    }
    else{
        printf("Invalid status!\n");
    }
    
    printf("----------------------------\n");
}