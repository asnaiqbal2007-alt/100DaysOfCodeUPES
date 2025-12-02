//Count vowels and consonants in a string.
#include <stdio.h>
#include <ctype.h>
int count(char arr[]);

int main(){
    char arr[100];
    printf("ENTER THE STRING: ");
    fgets(arr,sizeof(arr),stdin);
    count(arr);
    return 0;
}
int count(char arr[]){
    int countc,countv;
    countc=countv=0;
    
    for(int i = 0;arr[i]!='\0';i++){
        char ch = arr[i];
        ch=tolower(ch);
        if (ch == 'a'|| ch == 'e' || ch == 'i'|| ch == 'o' || ch == 'u'){
            countv++;
        }
        else{
            countc++;
        }

   

}
printf("The number of vowels is : %d\n",countv);
printf("The number of consonants is : %d\n",countc);
}

