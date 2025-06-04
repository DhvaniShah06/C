#include <stdio.h>
int power(int b,int p);
void main(){
    int b,p;
    printf("Enter base and power : ");
    scanf ("%d %d",&b,&p);
     int result=power(b,p);
     printf("%d",result);
}
int power(int x,int y){
    if(y==0){
        return 1;
    }
    else {
        return x*(power(x,y-1));
    }
}