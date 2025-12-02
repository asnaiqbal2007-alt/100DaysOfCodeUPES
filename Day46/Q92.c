//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
char rep(char arr[]);

int main(){
    int x;
    printf("Enter the length of string: ");
    scanf("%d", &x);
    getchar(); // this clears newline from scan
    
    char arr[x + 1]; // +1 to account for \0
    printf("Enter the string: ");
    fgets(arr, x + 1, stdin);
    
    
    if(arr[x] == '\n'){
        arr[x] = '\0';
    }
    
    char result = rep(arr);
    
    if(result != '\0'){
        printf("The first repeating lowercase alphabet is: %c\n", result);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }
    
    return 0;    
}

char rep(char arr[]){
    
    for(int i = 0; arr[i] != '\0'; i++){//first loop to go through the array and confirm if there is a small alphabet
        char ch = arr[i];
        
        
        if(ch >= 'a' && ch <= 'z'){
            
            for(int j = i + 1; arr[j] != '\0'; j++){//seccond nested loop to lock on to that char and check if its repeating
                if(arr[j] == ch){
                    return ch; 
                }
            }
        }
    }
    
    return '\0';
}