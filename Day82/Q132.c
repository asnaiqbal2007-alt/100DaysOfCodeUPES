/*Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

void displayTrafficSignal(enum TrafficLight light);

int main(){
    char input[10];
    enum TrafficLight currentLight;
    
    printf("Enter traffic light color (RED/YELLOW/GREEN): ");
    scanf("%s", input);
    
    if(strcmp(input, "RED") == 0){
        currentLight = RED;
    }
    else if(strcmp(input, "YELLOW") == 0){
        currentLight = YELLOW;
    }
    else if(strcmp(input, "GREEN") == 0){
        currentLight = GREEN;
    }
    else{
        printf("Invalid input!\n");
        return 0;
    }
    
    displayTrafficSignal(currentLight);
    
    return 0;
}

void displayTrafficSignal(enum TrafficLight light){
    if(light == RED){
        printf("Stop\n");
    }
    else if(light == YELLOW){
        printf("Wait\n");
    }
    else if(light == GREEN){
        printf("Go\n");
    }
    else{
        printf("Invalid\n");
    }
}