//Add two matrices.
/*VERY IMPORTANT I USED VLA AS IM NOT FAMILIAR WITH DYNAMIC PROGRAMMING SO PLEASE USE C99 STANDARD*/

//Use the flag: gcc -std=c99 file.c
#include <stdio.h>
void scan(int n,int m,int arr[n][m]);
void display(int n,int m,int arr[n][m]);
void sum(int n,int m,int arr[n][m],int n2, int m2,int arr2[n2][m2], int n1,int m1, int arrRes[n1][m1]);
int main(){
    int x, y;
    printf("Enter the size of the matrix:");
    scanf("%d %d",&x,&y);
    int arr1[x][y];
    int arr2[x][y];

    int Resultant[x][y];
    printf("======================================\n");
    scan(x,y,arr1);
    printf("======================================\n");
    printf("===================\n");
    display(x,y,arr1);
    printf("===================\n");
    printf("\n");
    printf("Enter the second matrix:\n");
    printf("======================================\n");
    scan(x,y,arr2);
    printf("======================================\n");
    printf("===================\n");
    display(x,y,arr2);
    printf("===================\n");
    printf("\n");
    printf("The sum of the 2 matrix is:\n");
    sum(x,y,arr1,x,y,arr2,x,y,Resultant);
    printf("===================\n");
    display(x,y,Resultant);
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
void sum(int n,int m,int arr[n][m],int n2, int m2,int arr2[n2][m2], int n1,int m1, int arrRes[n1][m1]){
    for(int i =0;i<n;i++){
        for(int j = 0;j<m;j++){
            arrRes[i][j]=arr[i][j]+arr2[i][j];
        }
    }
}
