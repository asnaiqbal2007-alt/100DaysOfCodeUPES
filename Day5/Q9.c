// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>
float simp(float pr, float ra , float ti);
float comp(float pr, float ra , float ti);

int main(){
    float p,r,t;

    printf("ENTER THE PRINCIPAL:");
    scanf("%f",&p);
    printf("ENTER THE RATE:");
    scanf("%f",&r);
    printf("ENTER THE TIME:");
    scanf("%f",&t);
    printf("SIMPLE INTEREST IS : %.2f\n",simp(p,r,t));
    printf("COMPOUND INTEREST IS : %.2f\n",comp(p,r,t));
    return 0;
}
float simp(float pr, float ra , float ti){
    float simpinterest = (pr*ra*ti)/100;//simple forumla for simple interest
    return simpinterest;
}
float comp(float pr, float ra , float ti){//just applying diff formula for compound interest and returning the value
    float increase = pow((1+ra/100),ti);
    float amount = pr*increase;
    float compintr = amount-pr;
    return compintr;

   
}

