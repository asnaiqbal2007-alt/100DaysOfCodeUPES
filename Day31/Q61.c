//Search for an element in an array using linear search.
#include <stdio.h>
void read(int arr[],int n);
void print(int arr[],int n);
void lsearch(int arr[],int n,int k);
int main(){
    int x,k;
    printf("ENTER THE NUMBER OF ELEMENTS YOU WANT IN THE ARRAY\n");
    scanf("%d",&x);
    int arr[x];
    printf("ENTER THE VALUES IN THE ARRAY:\n");
    read(arr,x);
    printf("THE ARRAY IS:\n");
    print(arr,x);
    printf("\n");
    printf("ENTER THE ELEMENT YOU ARE LOOKING FOR:\n");
    scanf("%d",&k);
    lsearch(arr,x,k);
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
void lsearch(int arr[],int n,int k){
    int isfound = 0;//isound flag similar to isprime else the loop will print too many times
    for(int i = 0;i<n;i++){
        if(arr[i]==k){
           isfound = 1;
        }
        else{
          isfound = 0;
        }
    }
    if(isfound==1){
           printf("ELEMENT FOUND!!!\n");
        }
        else{
            printf("ELEMENT NOT FOUND!!!\n");
        }
}