//Print the initials of a name.
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

    int lastname = 0;

   for(int i = 0;name[i]!='\0';i++){
    if(i==0){//kinda like a base case always fixed
    printf("%c.",name[i]);
    }
    else if(name[i]==' '){
        //int lastname = 0; this checks for only 2 initals eg K.S. if my name was smth like Kunal Pratap Saini then it would only show K.P. not K.P.S.
        lastname = i+1;
        printf("%c.",name[lastname]);
        
    }
    else{
        continue;
    }
    
   }
   free(name);
   return 0;
}
