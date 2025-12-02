//Toggle case of each character in a string.
//if char cap +32 and convert to smol if char smol -32 turn into cap 'a' - 'A' = 32 subtracting ASCII VALUE
#include <stdio.h>
#include <string.h>
void toggle(char arr[]);
int main(){
    char arr[100];
    printf("Enter the string: ");
    fgets(arr,sizeof(arr),stdin);
    int l = strlen(arr);
    if(arr[l-1]=='\n'){
        arr[l-1]='\0';
    }
    toggle(arr);
    printf("The toggled string is: ");
    puts(arr);
}
void toggle(char arr[]){
    for(int i =0;arr[i]!='\0';i++){
        
        if(arr[i]>='a'&&arr[i]<='z'){
            arr[i]=arr[i]-32;
        }
        else if(arr[i]>='A'&&arr[i]<='Z'){
            arr[i]=arr[i]+32;
        }
    }
}
