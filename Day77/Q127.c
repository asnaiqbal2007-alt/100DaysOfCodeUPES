/*Write a program that reads text from input.txt, converts all lowercase letters to uppercase, 
and writes the result to output.txt.*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void convertToUppercase(char inputFile[], char outputFile[]);

int main(){
    char inputFile[] = "input.txt";
    char outputFile[] = "output.txt";
    
    convertToUppercase(inputFile, outputFile);
    
    return 0;
}

void convertToUppercase(char inputFile[], char outputFile[]){
    FILE *input = NULL;
    FILE *output = NULL;
    
    input = fopen(inputFile, "r");
    
    if(input == NULL){
        printf("Error opening input file!\n");
        return;
    }
    else{
        output = fopen(outputFile, "w");
        
        if(output == NULL){
            printf("Error opening output file!\n");
            fclose(input);
            return;
        }
        else{
            char ch;
            int charCount = 0;
            
            while((ch = fgetc(input)) != EOF){
                if(islower(ch)){
                    ch = toupper(ch);
                }

                
                fputc(ch, output);
                charCount++;
            }
            
            fclose(input);
            fclose(output);
            
            printf("Text converted successfully!\n");
            printf("Total characters processed: %d\n", charCount);
            printf("Output written to %s\n", outputFile);
        }
    }
}