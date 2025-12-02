//Count characters in a string without using built-in length functions.
#include <stdio.h>
#include <stdlib.h>
int strlen(char arr[]);
int main(){
    char arr[1000];
    printf("ENTER THE STRING: ");
    fgets(arr,sizeof(arr),stdin);

    //char *ptr = NULL;
    //ptr = (char*)malloc(sizeof(arr));
    //free(ptr);
    printf("The size of the entered string is: %d",strlen(arr));
    return 0;
    
}
int strlen(char arr[]){
    int count = 0;
    for(int i = 0;arr[i]!='\n'&& arr[i]!='\0';i++){//as in char arr from fgets the new line comes before \0 but sometimes fgets forgets to put \n so we account for both else it gives me segmentation fault error
        count++;
    }
    return count;
}
