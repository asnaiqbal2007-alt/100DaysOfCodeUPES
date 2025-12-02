//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int converttoBinary(int arr[], int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int binsize[32]; // max 32 bits for an int
    int size = converttoBinary(binsize, n);

    printf("BINARY REPRESENTATION OF THE INPUT NUMBER IS :\n ");
    for(int i = size - 1; i >= 0; i--) // printing in reverse as digits are stored in reverse
        printf("%d", binsize[i]);
    printf("\n");

    return 0;

}
int converttoBinary(int arr[], int n){
    int i = 0;
    if(n == 0) {
        arr[i++] = 0;
        return i;
    }

    while(n > 0) {
        arr[i] = n % 2;  // storing remainder
        n = n / 2;       
        i++;
    }
    
    return i; // here i is the number of bits
}