#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str = (char*)malloc(100 * sizeof(char));
    if (str == NULL) {
        printf("Erro memory not allocated.\n");
        return -1;
    }

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    int len = strlen(str);
    if (str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;
    }
// using 2 ptr method first 2 loops sets the 2 indices intp pointers and moves them
int check = 1;
    for (int start = 0; start < len; start++) { // Time comp O(n^3) similar to matrix mult 
        for (int end = start; end < len; end++) {

             if (!check) {//to print comma after ever substr except the first one
                printf(", ");
            }
            check = 0;
        
            for (int k = start; k <= end; k++) {
                printf("%c", str[k]);
            }
    
        }
    }

    free(str);
    return 0;
}
