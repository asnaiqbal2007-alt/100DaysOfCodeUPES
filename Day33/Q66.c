//Insert an element in a sorted array at the appropriate position.
void read(int arr[],int n);
void print(int arr[],int n);
int insert(int arr[],int n,int m);
void sort(int arr[],int n);

int main(){
int x;
    printf("Enter the number of elements: ");
    scanf("%d", &x);
    

    int arr[x + 1]; //as in c arrays are not size mutable so we declare an array which is bigger
    read(arr, x);
    
    printf("Array:\n");
    print(arr, x);
    printf("\n");
    
  
    sort(arr, x);
    printf("Sorted Array:\n");
    print(arr, x);
    printf("\n");

    int y;
    printf("Enter the value of the element to insert: ");
    scanf("%d", &y);
    
 
    int newsize = insert(arr, x, y);
    printf("\n");
    printf("Array after insertion:\n");
    print(arr, newsize);


    return 0;
    
}
void read(int arr[],int n){
    printf("Enter the elements of the array:\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void print(int arr[],int n){
   
    for(int i = 0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
void sort(int arr[],int n){
    
    for(int i = 0;i<n;i++){
        int cur = arr[i];//taking the first element as current then reseting it every time we move on to the next one to compare it with others
        for(int j = i+1;j<n;j++){//second loop starts from cur+1 poss eg if arr[o] cur then we will start from arr[1] and compare
            if(arr[j]>cur){
                int temp = arr[j];//if the new one is greater we will replace the original one with new using a temp variable;
                arr[j]=arr[i];
                arr[i]=temp; 

            }
            else{
                continue;
            }
        }
    }
    
}
int insert(int arr[],int n,int m){
int i = n - 1;
    
 
    while (i >= 0 && arr[i] < m) {

        arr[i + 1] = arr[i]; 
        i--;
    }
    
  
    arr[i + 1] = m; 
    
    return n + 1;
}
