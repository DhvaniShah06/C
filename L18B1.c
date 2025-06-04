//generate fibonaci series using functions
#include <stdio.h>
void fibbo(int n);
void main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    fibbo(n);
}
void fibbo(int n){
    int i,c,a=0,b=1;
    printf("1 ");
     for(i=0;i<n;i++){
       c=a+b;
       printf("%d ",c);
       a=b;
       b=c;
    }
   
}