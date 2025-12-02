// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
void tri(int a, int b , int c);
int main(){
    int x,y,z;
    printf("ENTER SIDE 1:");
    scanf("%d",&x);
    printf("ENTER SIDE 2:");
    scanf("%d",&y);
    printf("ENTER SIDE 3:");
    scanf("%d",&z);
    if(((x+y)>z && (y+z)>x && (x+z)>y) && (x>0 && y>0 && z>0)){//CHECKING IF TRI IS VALID USING TRIANGLE INEQUALITY
            tri(x,y,z);
    }
    else{
        printf("ENTERED TRIANGLE IS NOT VALID");
    }
    return 0;

}
void tri(int a, int b , int c){
    if(a==b && b==c && c==a){
        printf("TRIANGLE IS EQUILATERAL");
    }
    else if((a==b &&(b!=c || c!=a))|| (b==c && (a!=c || a!=b))|| (c==a &&(a!=b || b!=c))){
        printf("TRIANGLE IS ISOSCELES");
    }
    else{
        printf("TRIANGLE IS SCALENE");
    }