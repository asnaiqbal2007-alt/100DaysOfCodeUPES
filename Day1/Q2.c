//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
float sum(float a, float b);
float diff(float a, float b);
float prod(float a, float b);
float quo(float a, float b);
int main(){
    float x,y;
    printf("ENTER THE FIRST NUMBER:");
    scanf("%f",&x);
    printf("ENTER THE SECOND NUMBER:");
    scanf("%f",&y);
    printf("SUM OF THE TWO NUMBERS IS %f \n",sum(x,y));
    printf("DIFFERENCE OF THE TWO NUMBERS IS %f \n",diff(x,y));
    printf("PRODUCT OF THE TWO NUMBERS IS %f \n",prod(x,y));
    if(y==0){
        printf("NOT DEFINED");
    }
    else{
    printf("QUOTIENT OF THE TWO NUMBERS IS %f \n",quo(x,y));
    }
    return 0;

}
float sum(float a, float b){
    return a+b;
}
float diff(float a, float b){
    return a-b;
}
float prod(float a, float b){
    return a*b;
}
float quo(float a, float b){
    return a/b;
}
