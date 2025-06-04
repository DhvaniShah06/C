// This program gives no. of days corresponding to number given by user
#include <stdio.h>
void main(){
    int a;
    printf("Enter a from 1 to 7 ");
    printf(\n"Enter a : ");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("MONDAY");
        break;
        case 2:
         printf("TUESDAY");
        break;
        case 3:
        printf("WEDNESDAY");
        break;
        case 4:
        printf("THURSDAY");
        break;
        case 5:
        printf("FRIDAY");
        break;
        case 6:
        printf("SATURDAY");
        break;
        case 7:
        printf("SUNDAY");
        break;
        default: printf("PLEASE ENTER VALUE FROM 1 TO 7") ;// not compulsory
    }
}