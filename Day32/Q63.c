//Merge two arrays.
#include <stdio.h>
/*LOGIC TAKE 2 ARRAYS AND PUT THEM INTO A THIRD ONE*/
void read(int arr[],int n);
void print(int arr[],int n);
#define MAX 100//without declaring this i was getting garbage value

void merge(int arr1[],int n,int arr2[],int m,int arr[],int r);
int main(){
    int x,y;
    int arr1[MAX],arr2[MAX],arr[MAX*2];
    printf("ENTER THE NUMBER OF ELEMENTS YOU WANT IN THE ARRAY1\n");
    scanf("%d",&x);
   
    printf("ENTER THE VALUES IN THE ARRAY:\n");
    read(arr1,x);
    printf("THE ARRAY IS:\n");
    print(arr1,x);//only using x space out of max

    printf("\n");
    printf("ENTER THE NUMBER OF ELEMENTS YOU WANT IN THE ARRAY2\n");
    scanf("%d",&y);
    
    printf("ENTER THE VALUES IN THE ARRAY:\n");
    read(arr2,y);
    printf("THE ARRAY IS:\n");
    print(arr2,y);

    int r = x+y;//total elements in resultant 
    printf("\n");
    merge(arr1,x,arr2,y,arr,r);
    printf("THE MERGED ARRAY IS:\n");
    print(arr,r);


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
void merge(int arr1[],int n,int arr2[],int m,int arr[],int r){
    int k = 0;
    
        for(int i=0;i<n;i++,k++){
            arr[k]=arr1[i];
        
        }
        for(int j =0;j<m;j++,k++){
            arr[k]=arr2[j];
        }
    }
    

        