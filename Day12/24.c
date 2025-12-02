//Write a program to calculate an electricity bill based on units consumed.

#include<stdio.h>
int bill(int n);
int main(){
    int a;
    printf("ENTER THE NUMBER OF UNITS CONSUMED:");
    scanf("%d",&a);
    printf("YOUR BILL IS: %d", bill(a));
    return 0;

}
int bill(int n) {
    int amount = 0;
    if (n <= 100) {
        amount = n * 5;
    } else if (n <= 200) {
        amount = (100 * 5) + (n - 100) * 5;
    } else {
        amount = (100 * 5) + (100 * 5) + (n - 200) * 10;
    }
    return amount;
}


