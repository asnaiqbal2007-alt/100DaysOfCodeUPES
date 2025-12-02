//Write a program to input two numbers and display their sum.

#include <stdio.h>
float sum(float a, float b);
int main(){
    float x,y;
    printf("ENTER THE FIRST NUMBER:");
    scanf("%f",&x);
    printf("ENTER THE SECOND NUMBER:");
    scanf("%f",&y);
    printf("SUM OF THE TWO NUMBERS IS %f",sum(x,y));
    return 0;
}

float sum(float a, float b){
    return a+b;
}