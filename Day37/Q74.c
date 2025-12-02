//Find the transpose of a matrix.
/*VERY IMPORTANT I USED VLA AS IM NOT FAMILIAR WITH DYNAMIC PROGRAMMING SO PLEASE USE C99 STANDARD*/

//Use the flag: gcc -std=c99 file.c
#include <stdio.h>
void scan(int n,int m,int arr[n][m]);
void display(int n,int m,int arr[n][m]);
void tra(int n,int m,int arr[n][m],int n1,int m1,int arrRes[n1][m1]);
int main(){
    int x, y;
    printf("Enter the size of the matrix:");
    scanf("%d %d",&x,&y);
    int arr[x][y];
    int Resultant[y][x];
    printf("======================================\n");
    scan(x,y,arr);
    printf("======================================\n");
    printf("===================\n");
    display(x,y,arr);
    printf("===================\n");
    printf("\n");
    printf("The transposed matrix is:\n");
    tra(x,y,arr,y,x,Resultant);
    printf("===================\n");
    display(y,x,Resultant);
    printf("===================\n");
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
void tra(int n,int m,int arr[n][m],int n1,int m1,int arrRes[n1][m1]){
    for(int i =0;i<m;i++){
        for(int j = 0;j<n;j++){
            arrRes[i][j]=arr[j][i];
        }
    }
}
