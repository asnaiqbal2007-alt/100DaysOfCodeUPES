/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/
#include <stdio.h>
void pattern(int r);

int main() {
    pattern(5);
    return 0;
}


void pattern(int r) {
 
    for (int i = 1; i <= r; i++) {//increasing half
        for (int j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n"); // blank line after each group
    }


    for (int i = r - 1; i >= 1; i--) {//decreasing half
        for (int j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n"); // blank line after each group
    }
}

