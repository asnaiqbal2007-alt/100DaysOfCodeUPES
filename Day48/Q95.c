//Check if one string is a rotation of another.
/*if i double the first string and if the second string exists in it then its rotation
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void rot(char arr1[], char arr2[]);
int main(){
    char arr1[101], arr2[101];
    printf("Enter string 1: ");
    fgets(arr1,101,stdin);
    int l = strlen(arr1);
    if(arr1[l-1] == '\n'){
        arr1[l-1] = '\0';
    }

    printf("Enter string 2: ");
    fgets(arr2,101,stdin);
    int l2 = strlen(arr2);
    if(arr2[l2-1] == '\n'){
        arr2[l2-1] = '\0';
    }
    rot(arr1,arr2);
    return 0;

}
void rot(char arr1[], char arr2[]){
    char arr3[202];
    strcpy(arr3,arr1);
    strcat(arr3,arr1);
    if(strstr(arr3,arr2)== NULL){
        printf("Not Rotation\n");
    }
    else{
        printf("Rotation\n"); //strstr checks if arr2 is substring of catenated arr1 and returns Null if substr is not found ohk
    }
}