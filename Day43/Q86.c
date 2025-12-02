//Check if a string is a palindrome.
#include <stdio.h>
#include <ctype.h>
#include<string.h>
int main(){
    char arr[100];
    printf("Enter the string: ");
    fgets(arr,sizeof(arr),stdin);
    int l = strlen(arr);
    if(arr[l-1]=='\n'){
        arr[l-1]='\0';
        l--;//do this whenever you remove newline as original l included new line
    }
    int ispalindrome = 1;
    
        int start = 0;//here start and end are indexes of arr
        int end = l-1;//as we need to access the index before \0
        while(end>start){
            if(tolower(arr[start])!=tolower(arr[end])){
                 ispalindrome = 0;
                 break;
            }
            end--;//decrementing last index and incrementing start index so that they both reach l/2
            start++;
           
        
    }
    if(ispalindrome == 1){
        printf("The entered string is a palindrome");
    }
    else{
        printf("The entered string is not a palindrome");
    }
    return 0;
    
}