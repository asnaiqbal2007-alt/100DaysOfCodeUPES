//Count spaces, digits, and special characters in a string.
//always use ascii in strings when alpha num spec
#include <stdio.h>
#include <string.h>
void count(char arr[]);
int main(){
        char arr[100];
    printf("Enter the string: ");
    fgets(arr,sizeof(arr),stdin);
    int l = strlen(arr);
    if(arr[l-1]=='\n'){
        arr[l-1]='\0';
        
    }
    count(arr);
    return 0;
}
void count(char arr[]){
    int dig,spa,spec;
    dig=spa=spec=0;
    for(int i =0;arr[i]!='\0';i++){
        char ch = arr[i];
        if(arr[i]>='0' && arr[i]<='9'){//we are using ascii value of 0 to 9 not their numerical value
            dig++;
        }
        else if(arr[i]==' '){
            spa++;
        }
        else if((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z')){
            continue;//skip alphabets as not asked
        }
        else{
            spec++;//everything else is special
        }
    }
    printf("No of Spaces: %d\n", spa);
    printf("No of Digits: %d\n", dig);
    printf(" No of Special Characters: %d\n", spec);
}