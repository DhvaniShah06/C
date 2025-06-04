//Swap two numbers using call by value and call by reference
#include <stdio.h>
void swap(int *x,int *y);
int main(){
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    //Reference :
    // swap(&a,&b);
    // printf("a= %d b= %d",a,b);
}
// void swap(int *x,int *y){
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }
//Value :
// swap(a,b);
// void swap(int x,int y){
//     int temp;
//     temp=x;
//     x=y;
//     y=temp;
//     printf("a = %d b = %d",x,y);
// }