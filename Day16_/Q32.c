//Write a program to check if a number is a palindrome.
/*I will use string reversal to check if its a palindrome*/
#include <stdio.h>
#include <string.h>

void palindrome(char arr[]);
int main(){
    char pal[500];
    fgets(pal,499,stdin);//inputing char array 1
    char pal2[500];//inputing char array 2
    strcpy(pal2,pal);//copying char arr 1 in arr 2
    size_t l = strlen(pal);// removing new line char from char array 1
    if(l>0 && pal[l-1]=='\n'){
        pal[l-1]='\0';
    }
    size_t l2 = strlen(pal2);//removing new line char from char array 2
    if(l2>0 && pal2[l2-1]=='\n'){
        pal2[l2-1]='\0';
    }
    palindrome(pal);//reversing pal char array pal 2 is still the original array
    (strcmp(pal,pal2)==0)?printf("%s is a palindrome",pal2):printf("%s is not a palindrome",pal2);//comparing pal char arr to pal2char array using ternary(fancy if else imo)
    return 0;
}
void palindrome(char arr[]){
    size_t l = strlen(arr);//fetching size of char arr
    for(int i = 0;i<l/2;i++){//reversal of char array
        char curr = arr[i];
        char rev = arr[l-i-1];
        arr[i]= rev;
        arr[l-i-1] = curr;
    }
    
}
 
