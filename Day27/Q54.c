/*Write a program to print the following pattern:

   *
  ***           part 1
 *****
*******
------------------------
 *****
  ***           part 2
   *
*/
#include <stdio.h>
void part1(int r);
void part2(int r);

int main(){
    part1(4);
    part2(3);
    return 0;

}
void part1(int r){
    for(int i =1;i<=r;i++){//loop for number of rows
        for(int j = 1;j<=r-i;j++){//inner loop 1 for decreasing number of spaces
            printf(" ");
        }
        
        for(int k = 1;k<=2*i-1;k++){//leave if logic use 2*i-1
                printf("*");
            }
            printf("\n");
        }
    }
void part2(int r){
    for(int i = 1;i<=r;i++){//outer loop for number of rows
        for(int j =1; j<=i; j++){//inner loop 1 for spaces
            printf(" ");
        }
        for(int k = 1;k<=2*(r-i)+1;k++){//print number of stars
            printf("*");
        }
        printf("\n");
    }
}
    

