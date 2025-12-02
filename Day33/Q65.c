//Search in a sorted array using binary search.
#include <stdio.h>
void read(int arr[],int n);
void sort(int arr[],int n);
void print(int arr[],int n);
void bsearch(int arr[],int n,int k);

int main(){
    int x,k;
    printf("Enter the number of elements:");
    scanf("%d",&x);
    int arr[x];
    read(arr,x);
    printf("Array:\n");
    print(arr,x);
    printf("\n");
    sort(arr,x);
    printf("Sorted Array:\n");
    print(arr,x);
    printf("\n");

    printf("Enter the element you want to search for:");
    scanf("%d",&k);
    bsearch(arr,x,k);
    return 0;
    
    
    //now binary search means we will take half of the array and compare it with the number if its greater we skip
    


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
void bsearch(int arr[],int n,int k){
int end = n-1;
int start = 0;
int mid;
while(start<=end){

    mid =(start+end)/2;
    if(arr[mid]==k){
        printf("Element %d found!!! at index %d",k,mid);
    }
    else if(k>arr[mid]){
        end = mid - 1;//move left as the array is descending
    }
    else{
        start = mid + 1;//if k is less then move right as to the right lower elements are present
    }
}
}

