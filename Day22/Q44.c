//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
float series(int n);
int main(){
    int x;
    printf("ENTER THE NUMBER OF TERMS:\n");
    scanf("%d",&x);
    printf("THE APPROXIMATE SUM IS OF %d terms is %.1f",x,series(x));
    return 0;

}
float series(int n){
    float sum = 1.0;
    if(n==1){
        return 1;
    }
    for(int i = 2;i<=n;i++){
        float Numerator = 2*i-1;//generalising numerator and denominator in terms of i to get a loop
        float Denominator = 2*i;
        sum = sum + (Numerator/Denominator);//storing the series
    }
    return sum;
}
