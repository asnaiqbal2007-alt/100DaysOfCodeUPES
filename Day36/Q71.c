//Read and print a matrix.
/*

/*VERY IMPORTANT I USED VLA AS IM NOT FAMILIAR WITH DYNAMIC PROGRAMMING SO PLEASE USE C99 STANDARD*/

//Use the flag: gcc -std=c99 file.c

//USING 2D ARRAY TO READ AND PRINT A MATRIX AND USING 2 LOOPS AS ITS TIME COMPLEXITY IS N**2*/
#include <stdio.h>
void read(int n,int m,int arr[n][m]);
void print(int n,int m,int arr[n][m]);
int main(){
    int x, y;
    printf("Enter the size of the matrix:");
    scanf("%d %d",&x,&y);
    int arr[x][y];
    read(x,y,arr);
    printf("==================================\n");
    print(x,y,arr);
    return 0;

}

void read(int n,int m,int arr[n][m]){
    for(int i = 0; i < n;i++){
        for(int j=0;j<m;j++){
        printf("Enter the %d(row) %d(column) element: ", i+1, j+1);
            scanf("%d",&arr[i][j]);
        }
    }
}
void print(int n,int m,int arr[n][m]){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}