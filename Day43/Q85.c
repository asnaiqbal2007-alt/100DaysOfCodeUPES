//Reverse a string.

#include <stdio.h>
#include <string.h>
int main(){
    char arr[100];
    printf("Enter the string: ");
    fgets(arr,sizeof(arr),stdin);
    int l = strlen(arr);
    if(arr[l-1]=='\n'){
        arr[l-1]='\0';
        l--;
    }
    for(int i =0;i<l/2;i++){
        char cur = arr[i];
        char rev = arr[l-i-1];
        arr[i]= rev;
        arr[l-i-1] = cur;
    }
    printf("The reversed string is: ");
    puts(arr);
}