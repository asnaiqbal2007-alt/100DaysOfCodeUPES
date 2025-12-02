//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void rev(char arr[]);

int main() {
    char arr1[101];
    printf("Enter string: ");
    fgets(arr1, 101, stdin);
    int l = strlen(arr1);
    if (arr1[l - 1] == '\n') arr1[l - 1] = '\0';

    rev(arr1);
    return 0;
}
void rev(char arr[]) {
    int i = 0;
    while (arr[i] != '\0') {
       
        while (arr[i] == ' ' || arr[i] == '\t')
            i++;

        int start = i;

       
        while (arr[i] != ' ' && arr[i] != '\t' && arr[i] != '\0')
            i++;

        int end = i - 1;

       
        while (start < end) {
            char temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    printf("%s\n", arr);
}