//add two numbers using functions
#include <stdio.h>
 int add(int,int);
 void main(){
   int a,b;
    printf("Enter an integer a : ");
    scanf("%d",&a);
    printf("Enter an integer b : ");
    scanf("%d",&b);
    add(a,b);
    int result=add(a,b);
    printf("Sum : %d",result);
 }
 int add(int a, int b){
 int z=a+b;
 return z;
 }