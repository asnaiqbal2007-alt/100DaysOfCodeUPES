//Count frequency of a given character in a string.

#include <stdio.h>
#include <string.h>
int freq(char arr[],char k);
int main(){
    char arr[100];
    printf("Enter the string: ");
    fgets(arr,sizeof(arr),stdin);
    int l = strlen(arr);
    if(arr[l-1]=='\n'){
        arr[l-1]='\0';
        
    }
    char k;
    printf("Enter the character whose frequency you want to check: ");
    scanf("%c",&k);
    
    
    printf("The frequency of %c in the entered string is: %d ",k,freq(arr,k));
    return 0;
}
int freq(char arr[],char k){
    int count=0;
    for(int i = 0;arr[i]!='\0';i++){
        if(arr[i]==k){
            count++;
        }
    }
    return count;
}