// Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
double quad1(int p,int q, int r);//USING DOUBLE AS ROOTS CAN ALSO BE IMAGINARY AND WE USE %lf for DOUBLE!!!!!!
double quad2(int p,int q, int r);
void nature(int p,int q, int r);



int main(){
    int a,b,c;
    printf("ENTER COFFECIENT OF X^2:\n");
    scanf("%d",&a);
     printf("ENTER COFFECIENT OF X:\n");
    scanf("%d",&b);
     printf("ENTER CONSTANT TERM:\n");
    scanf("%d",&c);
    nature(a,b,c);
    printf("SOLUTIONS OF THE QUADRATIC EQUATION %dX^2+%dX+%d ARE : %.2lf , %.2lf \n ",a,b,c,quad1(a,b,c),quad2(a,b,c));//using lf in certain places as roots can also be imaginary and %lf is used to get double value
    return 0;

}
double quad1(int p,int q, int r){
    int D = q*q - 4*p*r;
     if(D<0){
        return NAN;//NOT A NUMBER IT MEANS ITS NOT REAL, in python its None or NaN ig, remember here NAN
    }
    double soln1= (-q + sqrt(D))/(2.0*p);
    return soln1;
    

}
double quad2(int p,int q, int r){
     int D = q*q- 4*p*r;
     if(D<0){
        return NAN;//NOT A NUMBER IT MEANS ITS NOT REAL, in python its None or NaN ig, remember here NAN
    }
    double soln2= (-q - sqrt(D))/(2.0*p);
    return soln2;
}
void nature(int p,int q, int r){
    int D = q*q - 4*p*r;
    if(D>0){
        printf("ROOTS ARE REAL\n");
    }
    else if(D==0){
        printf("ROOTS ARE REALAND EQUAL\n");
    }
    else{
        printf("ROOTS ARE IMAGINARY\n");
    }
}




