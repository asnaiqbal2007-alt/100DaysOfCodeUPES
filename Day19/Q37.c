//Write a program to find the LCM of two numbers.
#include <Stdio.h>
int lcm(int a,int b);
int max(int a,int b);
int main(){
     int a,b;
    printf("ENTER THE FIRST NUMBER:\n");
    scanf("%d",&a);
    printf("ENTER THE SECOND NUMBER:\n");
    scanf("%d",&b);
    printf("THE LCM OF %d and %d is %d",a,b,lcm(a,b));
    return 0;

}
int lcm(int a,int b){
    int LCM =0;
    for(int i=max(a,b);i<=a*b;i++){//lcm is at least the larger of the two numbers and can be anything till a*b
        if(i%a==0 && i%b==0){
            LCM = i;
            return LCM;//lcm is the lowest multiple so no need to check further
        }
    }
   
}
int max(int a,int b){
    if(a>b){
        return a;
    }
    if(b>a){
        return b;
    }
    else{
        return a;
    }
}