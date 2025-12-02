//Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>
#include <string.h>
int main(){
    char arr[100];
    printf("Enter the string: ");
    fgets(arr,sizeof(arr),stdin);
    int l = strlen(arr);
    if(arr[l-1]=='\n'){
        arr[l-1]='\0';
    }
    for(int i = 0;arr[i]!='\0';i++){
        if(arr[i]>='a'&& arr[i]<='z'){// ASCII OF a is 97 and of z is like 110+ so here we are using ASCII RANGE VALUE
        arr[i]=arr[i]-32;
        }// as upercase and lowercase differ by 32
    }
    printf("The modified string is: ");
    puts(arr);
    return 0;
}