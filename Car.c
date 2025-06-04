#include <stdio.h>
#include <string.h>
struct Car{
    char Model[100];
    char Company[100];
    int Price;
};
 void   CarDetails(struct Car b[],int size);
void main(){
    int a,i;
    struct Car c[2];
    for(i=0;i<2;i++){
        printf("Car Details for Car %d\n",i+1);
     scanf("%s",&c[i].Model);
    scanf(" %s",&c[i].Company);
     scanf("%d",&c[i].Price);
    }
    CarDetails(c,2);
}
 void  CarDetails(struct Car b[],int size){
int i;
for(i=0;i<size;i++){
    if(b[i].Price>=10000){
        printf("%s\n",b[i].Company);
        printf("%s\n",b[i].Model);
    }
}
}