//Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

void lo(char arr[]);

int main(){
    char arr1[101];
    printf("Enter string 1: ");
    fgets(arr1,101,stdin);
    int l = strlen(arr1);
    if(arr1[l-1] == '\n'){
        arr1[l-1] = '\0';
    }
    lo(arr1);
    return 0;
}

void lo(char arr[]){
    int i=0,len=0,maxlen=0,start=0,maxs=0;
    while(arr[i]!='\0'){
        if(arr[i]!=' ' && arr[i]!='\t'){
            len++;
        }
        else{
            if(len>maxlen){
                maxlen=len;
                maxs=start;
            }
            len=0;
            start=i+1;
        }
        i++;
    }

    if(len>maxlen){ 
        maxlen=len;
        maxs=start;
    }

    printf("Longest word: ");
    for(int j=maxs;j<maxs+maxlen;j++){
        printf("%c",arr[j]);
    }
    printf("\nLength = %d\n",maxlen);
}
