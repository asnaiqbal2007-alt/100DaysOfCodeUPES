// ...existing code...
/*Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. 
Print the length as output.*/
#include <stdio.h>
#include <string.h>

int main(){
    char s[500];
    printf("ENTER THE STRING:\n");
    if (!fgets(s, sizeof(s), stdin)) return 0;
    s[strcspn(s, "\n")] = '\0'; // remove newline

    int last[256];
    for(int i = 0; i < 256; i++) last[i] = -1;

    int start = 0;
    int maxlen = 0;

    for(int i = 0; s[i] != '\0'; i++){
       char ch = (char)s[i];
        if (last[ch] >= start){
            start = last[ch] + 1;
        }
        last[ch] = i;
        int curlen = i - start + 1;
        if (curlen > maxlen) maxlen = curlen;
    }

    printf("LENGTH OF LONGEST SUBSTRING WITHOUT REPEATING CHARACTERS IS: %d\n", maxlen);
    return 0;
}