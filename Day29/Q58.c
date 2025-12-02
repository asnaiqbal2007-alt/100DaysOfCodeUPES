//Find the maximum and minimum element in an array.
#include <stdio.h>
void read(int arr[],int n);
void print(int arr[],int n);
int max(int arr[],int n);
int min(int arr[],int n);
int main(){
    int x;
    printf("ENTER THE NUMBER OF ELEMENTS YOU WANT IN THE ARRAY\n");
    scanf("%d",&x);
    int arr[x];
    printf("ENTER THE VALUES IN THE ARRAY:\n");
    read(arr,x);
    printf("THE ARRAY IS:\n");
    print(arr,x);
    printf("\n");
    printf("THE MAXIMUM ELEMENT IN THE ABOVE ARRAY IS : %d\n",max(arr,x));
    printf("THE MINIMUM ELEMENT IN THE ABOVE ARRAY IS : %d\n",min(arr,x));

    return 0;

}
void read(int arr[],int n){
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void print(int arr[],int n){
    for(int i =0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
int max(int arr[],int n){
    int curmax = arr[0];//setting current max as the first element of array
    for(int i =0;i<n;i++){
        if(arr[i]>curmax){
            curmax =arr[i];//storing larger element in curmax every time
        }
    }
    return curmax;
}
int min(int arr[],int n){
    int curmin= arr[0];
    for(int i =0;i<n;i++){//ananlogue to max
        if(arr[i]<curmin){
            curmin=arr[i];
        }
    }
    return curmin;
}
