//Perform diagonal traversal of a matrix.

#include <stdio.h>
void read(int n,int m,int arr[n][m]);//use this syntax when using variable length arrays
void display(int n,int m,int arr[n][m]);
void diagonalTraversal(int n, int m, int a[n][m]);
int main(){
        int n, m;
    printf("Enter the size of the matrix (rows columns): ");
    scanf("%d %d", &n, &m);

    int arr[n][m];

    printf("======================================\n");
    read(n, m, arr);
    printf("======================================\n");

    printf("Matrix entered:\n");
    printf("===================\n");
    display(n, m, arr);
    printf("===================\n");

    printf("\nDiagonal Traversal of Matrix:\n");
    diagonalTraversal(n, m, arr);

    return 0;
}
void read(int n,int m,int arr[n][m]){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
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
void diagonalTraversal(int n, int m, int a[n][m]) {  //for every odd diagonal we go up and for every even diagonal we go down
    for (int d = 0; d < n + m - 1; d++) {
        int temp[100], t = 0;

        
        for (int i = 0; i < n; i++) {
            int j = d - i;
            if (j >= 0 && j < m) {
                temp[t++] = a[i][j];
            }
        }

        
        if (d % 2 == 0) { 
            for (int i = t - 1; i >= 0; i--)
                printf("%d ", temp[i]);
        } else {          
            for (int i = 0; i < t; i++)
                printf("%d ", temp[i]);
        }
    }
}
