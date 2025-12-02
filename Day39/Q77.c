//Check if the elements on the diagonal of a matrix are distinct.


/*VERY IMPORTANT I USED VLA AS IM NOT FAMILIAR WITH DYNAMIC PROGRAMMING SO PLEASE USE C99 STANDARD*/

//Use the flag: gcc -std=c99 file.c

//NOTE THIS ONLY WORKS FOR 3*3 AS FOR BIGGER ONES CODE WILL BECOME COMPLEX
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
    if(arr1[0][0]==arr1[1][1] || arr1[0][0] == arr1[2][2] || arr1[2][2]==arr1[1][1]){
        printf("The diagonal elements are not distinct\n");
    }
    else{
        printf("The diagonal elements are distinct\n");
   
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