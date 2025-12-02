//Find the sum of main diagonal elements for a square matrix.

/*VERY IMPORTANT I USED VLA(variable length array)AS IM NOT FAMILIAR WITH DYNAMIC PROGRAMMING SO PLEASE USE C99 STANDARD*/

//Use the flag: gcc -std=c99 file.c
#include <stdio.h>
void scan(int n,int m,int arr[n][m]);
void display(int n,int m,int arr[n][m]);
int main(){
    int x, y;
    printf("Enter the size of the matrix:");
    scanf("%d %d",&x,&y);
    int arr1[x][y];
  
    printf("======================================\n");
    scan(x,y,arr1);
    printf("======================================\n");
    printf("===================\n");
    display(x,y,arr1);
    printf("===================\n");
    printf("\n");
    int sum = 0;
    for(int i =0;i<x;i++){

         sum+=arr1[i][i]; //arr 00 +arr 11 + arr 22
        
    }
    printf("Sum of main diagnol of matrix is: %d",sum);
    return 0;
}
void scan(int n,int m,int arr[n][m]){
    for(int i = 0; i < n;i++){
        for(int j=0;j<m;j++){
        printf("Enter the %d(row) %d(column) element: ", i+1, j+1);
            scanf("%d",&arr[i][j]);
        }
    }
}
void display(int n,int m,int arr[n][m]){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}