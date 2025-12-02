/*A file numbers.txt contains a list of integers separated by spaces. 
Read all integers, compute their sum and average, and print both.*/
#include <stdio.h>
#include <stdlib.h>

void computeSumAndAverage(char filename[]);

int main(){
    char filename[] = "numbers.txt";
    
    computeSumAndAverage(filename);
    
    return 0;
}

void computeSumAndAverage(char filename[]){
    FILE *file = NULL;
    
    file = fopen(filename, "r");
    
    if(file == NULL){
        printf("Error opening file!\n");
        return;
    }
    else{
        int sum = 0;
        int count = 0;
        int num = 0;
        
        while(fscanf(file, "%d", &num) == 1){
            sum = sum + num;
            count++;
        }
        
        fclose(file);
        
        if(count == 0){
            printf("No numbers found in the file.\n");
        }
        else{
            float average = (float)sum / count;
            
           
            printf("Total numbers: %d\n", count);
            printf("Sum: %d\n", sum);
            printf("Average: %.2f\n", average);
        }
    }
}