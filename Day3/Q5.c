//Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
float temp(float c); //initialising a fucntion to do the conversion
int main(){
    float d;
    printf("ENTER YOUR TEMPERATUR IN CELSIUS:\n");
    scanf("%f",&d);
    printf("YOUR TEMPERATURE IN FARENHIET IS: %.2f",temp(d));/*putting input celsius into the function and
                                                            print with a precision of 2 digits
                                                            */
    return 0;

}
float temp(float c){
    float celtofar = (9*c/5)+32;//putting the formula in the function
    return celtofar;

}
