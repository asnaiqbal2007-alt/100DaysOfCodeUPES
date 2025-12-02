//Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
#define pi 3.14 
float area(float a);
float circum(float b);
int main(){
    float r;
    printf("ENTER THE RADIUS OF THE CIRCLE:");
    scanf("%f",&r);
    if (r>0){
        printf("AREA OF THE CIRCLE IS %f \n",area(r));
        printf("CIRCUMFERENCE OF THE CIRCLE IS %f \n",circum(r));
    }
    else{
        printf("RADIUS OF A CIRCLE CANT BE NEGATIVE!!!");
    }
    return 0;
}
float area(float a){
    return pi*a*a;
}
float circum(float b){
    return 2*pi*b;
}
