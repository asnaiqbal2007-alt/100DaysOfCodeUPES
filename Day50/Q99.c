//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <stdlib.h>
const char * extractstr(char *date);//const char * return type return strings and char
int main(){
    char *date;
    date =(char*)malloc(15*sizeof(char));
    printf("Enter the date in [dd/mm/yyyy] format: ");
    fgets(date,15,stdin);
    //ascii of 0 is 48 and of 1 is 49 then 49-48 = 1 converting char to integer;
    //extracting day from string
    int dayt = date[0] - '0';
    int dayo = date[1] - '0';
    int day = dayt*10 + dayo;

    //extracting year from string
    int yearthou = date[6] - '0';
    int year100 = date[7] - '0';
    int yearten = date[8] - '0';
    int yearone = date[9] - '0';
    int year = yearthou * 1000 + year100 * 100 + yearten * 10 + yearone;


    printf("%d-%s-%d",day,extractstr(date),year);
    free(date);
    return 0;

}


const char * extractstr(char *date){
    //extracting month from string
    int monthtens = date[3] - '0';
    int monthones = date[4] - '0';
    int month = monthtens*10 + monthones;
    //using switch as if would be too hectic
    switch(month){
        case 1:
            return "Jan";
        case 2:
            return "Feb";
        case 3:
            return "Mar";
        case 4:
            return "Apr";
        case 5:
            return "May";
        case 6:
            return "June";
        case 7:
            return "July";
        case 8:
            return "Aug";
        case 9:
            return "Sept";
        case 10:
            return "Oct";
        case 11:
            return "Nov";
        case 12:
            return "Dec";
        default:
            return "Invalid";
            
    }
}