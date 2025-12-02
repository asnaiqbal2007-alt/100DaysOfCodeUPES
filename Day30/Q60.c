//Count positive, negative, and zero elements in an array.
#include <stdio.h>
void read(int arr[],int n);
void print(int arr[],int n);
void count(int arr[],int n);
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
    count(arr,x);
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
void count(int arr[],int n){
    int poscount,negcount,zercount;//initializing 3 individual counters with initial value of 0 ;)
    poscount=negcount=zercount=0;
    for(int i =0;i<n;i++){
        if(arr[i]>0){
            poscount++;
        }
        else if(arr[i]<0){
            negcount++;
        }
        else{
            zercount++;
        }
    }
    printf("NUMBER OF POSITIVE ELEMENTS: %d\n",poscount);
    printf("NUMBER OF NEGATIVE ELEMENTS: %d\n",negcount);
    printf("NUMBER OF ZERO ELEMENTS: %d\n",zercount);
}