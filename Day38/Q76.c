//Check if a matrix is symmetric.

/*VERY IMPORTANT I USED VLA AS IM NOT FAMILIAR WITH DYNAMIC PROGRAMMING SO PLEASE USE C99 STANDARD*/

//Use the flag: gcc -std=c99 file.c

/* WHEN A MATRIX IS EQUAL TO ITS TRANSPOSE THEN ITS CALLED SYMMETRIC */
#include <stdio.h>
void scan(int n,int m,int arr[n][m]);
void display(int n,int m,int arr[n][m]);
void tra(int n,int m,int arr[n][m],int n1,int m1,int arrRes[n1][m1]);
int main(){
     int x, y;
    printf("Enter the size of the matrix:");
    scanf("%d %d",&x,&y);
    int arr1[x][y];
    
    int Resultant[x][y];
    printf("======================================\n");
    scan(x,y,arr1);
    printf("======================================\n");
    printf("===================\n");
    display(x,y,arr1);
    printf("===================\n");
    printf("\n");
    printf("The transposed matrix is:\n");
    tra(x,y,arr1,x,y,Resultant);
    printf("===================\n");
    display(x,y,Resultant);
    printf("===================\n");
    printf("\n");
    int isSymm = 1;
    for(int i =0;i<x;i++){
        for(int j = 0;j<y;j++){
            if(Resultant[i][j]!=arr1[i][j]){  
                isSymm = 0;
                //break; cant use this as it breaks out of only one loop
                goto condition;
               
            }
        }
    }
    condition:
    if(isSymm == 1){
        printf("The matrix is symmetric");
    }
    else{
        printf("The matrix is not symmetric");
    }
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
    for(int i =0;i<n;i++){
        for(int j = 0;j<m;j++){
            arrRes[i][j]=arr[j][i];
        }
    }
}
