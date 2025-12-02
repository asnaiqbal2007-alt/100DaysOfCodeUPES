//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
float series(int n);
int main(){
    int x;
    printf("ENTER THE NUMBER OF TERMS:\n");
    scanf("%d",&x);
    printf("THE APPROXIMATE SUM IS OF %d terms is %.2f",x,series(x));
    return 0;
}
float series(int n){
    float sum = 0.0;
    for(int i =1;i<=n;i++){
        float Numerator = 2*i;
        float Denominator = 4*i-1;//2*(2*i+1)-3 = 4*i -1
        sum = sum + (Numerator/Denominator);
    }
    return sum;
}