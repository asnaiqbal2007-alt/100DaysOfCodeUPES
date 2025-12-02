//Replace spaces with hyphens in a string.
#include <stdio.h>
#include <string.h>
void replace(char arr[]);
int main(){
        char arr[100];
    printf("Enter the string: ");
    fgets(arr,sizeof(arr),stdin);
    int l = strlen(arr);
    if(arr[l-1]=='\n'){
        arr[l-1]='\0';
        
    }
    replace(arr);
    printf("The modified string is: ");
    puts(arr);
    return 0;
}
void replace(char arr[]){
    for(int i = 0;arr[i]!='\0';i++){
        if(arr[i]==' '){
            arr[i]='-';
        }
    }
}
