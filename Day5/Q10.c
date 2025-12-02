// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
void time(int s);
int main(){
    int seconds;
    printf("ENTER TIME IN SECONDS:");
    scanf("%d",&seconds);
    time(seconds);
    return 0;
}
void time(int s){
    int hrs = s/3600;//1hr is 3600s so we div by that to get number of hrs
    int leftsec = s%3600;//then we use modulus to get remainder as after div by 3600 we get remaining secs as remainder
    int mins = leftsec/60;//1 min is 60s, remainingsecs div by 60 gives no of mins
    int sec=leftsec%60;//now when we div remainingsecs by 60 we get remaining seconds as remainder so we use modulus.
    printf("TIME IS %d:%d:%d",hrs,mins,sec);
}