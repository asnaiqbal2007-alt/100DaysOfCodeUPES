//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char *name = NULL;
    name = (char*)malloc(100*sizeof(char));
    if(name == NULL){
        printf("Erro memory not allocated.");
        return -1;
    }
    printf("Enter the name: ");
    fgets(name,100,stdin);

    int len = strlen(name);
    if(name[len-1]=='\n'){
        name[len-1]='\0';
        len--;//\n was removed
    }

    //finding the last space
    int lspacepos = 0;
    for(int i = len - 1; i >= 0 ; i--){
        if(name[i]==' '){
            lspacepos = i;
            break;
        }
        else{
            continue;
        }
    }
        //now before the lspacepos we will print the intials and after that the whole string array
        int lname = 0;
    for(int j = 0;j<lspacepos;j++){
        if(j==0){
            printf("%c.",name[j]);
        }
        else if(name[j] ==' '){
           lname = j+1;//the char after space 
           printf("%c. ",name[lname]);
        }
        else{
            continue;
        }
        
    }
    //printing sir name string now 
        for(int k = lspacepos + 1;name[k]!='\0';k++){
            printf("%c",name[k]);
        }
        free(name);
    return 0;
    
}