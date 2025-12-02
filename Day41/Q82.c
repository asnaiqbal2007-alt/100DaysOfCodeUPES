//Print each character of a string on a new line.
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main(){
    char arr[1000];
    printf("Enter the string: ");
    fgets(arr,1000,stdin);
    char*ptr = NULL;
    ptr=(char*)malloc(sizeof(arr));

    free(ptr);
    int l = strlen(arr);
    
        if(arr[l-1]=='\n'){
            arr[l-1]='\0';
        }
    
    for(int i =0;arr[i]!='\0';i++){
        printf("%c\n",arr[i]);
    }
}