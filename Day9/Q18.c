// Write a program to assign grades based on a percentage input.
#include <stdio.h>
const char* grade(int p);
int main(){
    int per;
    printf("ENTER YOUR PERCENTAGE:");
    scanf("%d",&per);
    printf("CONGRATULATIONS!! YOUR GRADE IS %s",grade(per));// %s is used to recieve string from const char* return type
    return 0;

}
 const char* grade(int p){
    if(p<35){
        return "F";
    }
    else if(p>=35 && p<=39){
        return "C";
    }
    else if(p>=40 && p<=44){
        return "C+";
    }
    else if(p>=45 && p<=54){
        return "B";
    }
     else if(p>=55 && p<=64){
        return "B+";
    }
     else if(p>=65 && p<=74){
        return "A";
    }
     else if(p>=75 && p<=84){
        return "A+";
    }
     else{//in this case its counting 85 and above
        return "O";
    }
}

