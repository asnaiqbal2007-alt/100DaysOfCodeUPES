//Multiply two matrices.
void scan(int n,int m,int arr[n][m]);
void display(int n,int m,int arr[n][m]);
void mult(int n,int m,int arr[n][m],int o,int p,int ARR[o][p],int RES[n][p]);// n   m o   p   for mult o==p and result matrix is n p 
int main(){
  int x, y,x1,y1;
    printf("Enter the size of the matrix 1:");
    scanf("%d %d",&x,&y);
    int arr1[x][y];
    

    
    printf("======================================\n");
    scan(x,y,arr1);
    printf("======================================\n");
    printf("===================\n");
    display(x,y,arr1);
    printf("===================\n");
    printf("\n");
    printf("Enter the size of matrix 2:\n");
   
    scanf("%d %d",&x1,&y1);

    int arr2[x1][y1];
    printf("======================================\n");
    scan(x1,y1,arr2);
    printf("======================================\n");
    printf("===================\n");
    display(x1,y1,arr2);
    printf("===================\n");
    printf("\n");
    printf("The product of the 2 matrix is:\n");
    if (y == x1) {
        int Resultant[x][y1];
        
       
        mult(x, y, arr1, x1, y1, arr2, Resultant); 
        
        printf("===================\n");
        display(x, y1, Resultant);
        printf("===================\n");
    } else {
        
        printf("Multiplaction not possible: The number of columns in the first matrix (%d) must equal the number of rows in the second matrix (%d).\n", y, x1);
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
void mult(int n,int m,int arr[n][m],int o,int p,int ARR[o][p],int RES[n][p]){
    
        for(int i =0;i<n;i++){
        
        for(int j =0;j<p;j++){
            RES[i][j]=0;
            for(int k = 0;k<m;k++){
                RES[i][j]+=arr[i][k]*ARR[k][j];
            }
        }

    }
}




