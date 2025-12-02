//Write a program to calculate a library fine based on late days.

#include <stdio.h>
void fee(int a);

int main(){
    int n;
    printf("ENTER THE NUMBER OF LATE DAYS:");
    scanf("%d",&n);
    fee(n);
    return 0;

}
void fee(int a){
    if(a>=1){
    int late;
    if(a>=1 && a<=5){
        late = 2*a;
        printf("YOUR FINE IS : %d",late);

    }
    else if( a>=6 && a<=10){
        late = 2*5+(a-5)*4;
        printf("YOUR FINE IS : %d",late);

    }
    else if(a>=11 && a<=30){
        late = 2*5+5*4+(a-10)*6;
        printf("YOUR FINE IS : %d",late);
    }
    else{
        printf("MEMBERSHIP CANCELLED");
    }
}
else{
    printf("ENTER POSITIVE VALUE OF DAYS");
}
}