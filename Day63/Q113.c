/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array.
 Print the kth smallest element as output.*/
 #include <stdio.h>

void input(int arr[],int n);
void print(int arr[],int n);
void sort(int arr[],int n);
//logic simply sort the array in ascending order then print element at k-1 index
int main(){
    int n,k;
    n=k=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter values:\n");
    input(arr,n);
    printf("Entered array:\n");
    print(arr,n);
    sort(arr,n);
    printf("Entered the value of K(Kth smallest element):");
    scanf("%d",&k);
    sort(arr,n);
    printf("The %dth smallest element is: %d",k,arr[k-1]);
    return 0;

}
void print(int arr[],int n){
    for(int i = 0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void input(int arr[],int n){
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void sort(int arr[],int n){//sorting ascending
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}

