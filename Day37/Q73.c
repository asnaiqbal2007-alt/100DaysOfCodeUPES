//Find the sum of each row of a matrix and store it in an array.
/*VERY IMPORTANT I USED VLA AS IM NOT FAMILIAR WITH DYNAMIC PROGRAMMING SO PLEASE USE C99 STANDARD*/

//Use the flag: gcc -std=c99 file.c
#include <stdio.h>
void scan(int n,int m,int arr[n][m]);
void display(int n,int m,int arr[n][m]);
void sum_of_row(int r,int m,int arr[r][m],int sumarr[],int x);


int main(){ 
    int x, y;
    printf("Enter the size of the matrix:");
    scanf("%d %d",&x,&y);
    int arr[x][y];
    int sumarr[x];
    printf("======================================\n");
    scan(x,y,arr);
    printf("======================================\n");
    printf("===================\n");
    display(x,y,arr);
    printf("===================\n");
    printf("\n");
    sum_of_row(x,y,arr,sumarr,x);
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
void sum_of_row(int r,int m,int arr[r][m],int sumarr[],int x){//here r is the row number
  for(int i = 0; i < r;i++){
    int rsum = 0;//rsum reinitialized as 0 after each row
    for(int j =0;j< m;j++){
        rsum+=arr[i][j];
        sumarr[i]=rsum;
    }
    sumarr[i]=rsum;//storing sum after each element of a single row is navigated through
    printf("The sum of elements or row %d is: %d\n",i,sumarr[i]);
  }
}



