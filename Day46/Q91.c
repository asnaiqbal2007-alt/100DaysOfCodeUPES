//Remove all vowels from a string.
#include <stdio.h>
#include <ctype.h>
int rem(char arr[]);

int main(){
    char arr[100];
    printf("ENTER THE STRING: ");
    fgets(arr,sizeof(arr),stdin);
    rem(arr);
    printf("The formatted string is: ");
    puts(arr);

    return 0;
}
int rem(char arr[]){

    
    for(int i = 0;arr[i]!='\0';i++){
      char ch = arr[i];
        ch=tolower(ch);  
        if (ch == 'a'|| ch == 'e' || ch == 'i'|| ch == 'o' || ch == 'u'){
            arr[i]="";
        }
        else{
            continue;
        }
    }
}

