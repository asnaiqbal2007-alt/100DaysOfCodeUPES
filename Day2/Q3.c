//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
float area(int a, int b);
float peri(int a, int b);
int main(){
    float x,y;
    printf("ENTER THE LENGTH OF THE RECTANGLE:");
    scanf("%f",&x);
    printf("ENTER THE BREADTH OF THE RECTANGLE:");
    scanf("%f",&y);
    if (x>0 && y>0){
        printf("AREA OF THE RECTANGLE IS %f \n",area(x,y));
        printf("PERIMETER OF THE RECTANGLE IS %f \n",peri(x,y));
    }
    else{
        printf("SIDES OF A RECTANGLE CANT BE NEGATIVE!!!");
    }
    return 0;
}
float area(int a, int b){
    return a*b;
}
float peri(int a, int b){
    float perimeter = 2*(a+b);
    return perimeter;
}
