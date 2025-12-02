//Find the sum of all elements in a matrix.

/*VERY IMPORTANT I USED VLA AS IM NOT FAMILIAR WITH DYNAMIC PROGRAMMING SO PLEASE USE C99 STANDARD*/

//Use the flag: gcc -std=c99 file.c

/*I will scan and print the matrix first*/

#include <stdio.h>

void read(int n,int m,int arr[n][m]);
void print(int n,int m,int arr[n][m]);
int sum(int n,int m,int arr[n][m]);

int main(){ 
    int x, y;
    printf("Enter the size of the matrix:");
    scanf("%d %d",&x,&y);
    int arr[x][y];
    printf("====================================\n");
    read(x,y,arr);
    printf("====================================\n");
    printf("===================\n");
    print(x,y,arr);
    printf("===================\n");
    printf("\n");
    printf("Sum of all elements of the matrix is: %d",sum(x,y,arr));
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

int sum(int n,int m,int arr[n][m]){
    int sum = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            sum=sum + arr[i][j];
        }
    }
    return sum;
}

