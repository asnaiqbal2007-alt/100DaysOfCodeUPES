//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
float profit(float c , float s);
float loss(float c , float s);

int main(){
    float c,s;
    printf("ENTER THE COST PRICE:");
    scanf("%f",&c);
    printf("ENTER THE SELLING PRICE:");
    scanf("%f",&s);
    if((s-c)>0){
        printf("PROFIT INCURRED OF %.2f PERCENT",profit(c,s));
    }
    else if((s-c)<0){
        printf("LOSS INCURRED OF %.2f PERCENT",loss(c,s));
    }
    else{
        printf("NEITHER PROFIT NOR LOSS INCURRED");
    }

}
float profit(float c , float s){
    float prof = s-c;
    float profperc = (prof*100)/c;
    return profperc;
}
float loss(float c , float s){
    float los = c-s;
    float lossperc = (los*100)/c;
    return lossperc;
}
