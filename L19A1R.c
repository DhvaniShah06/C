//recursive call
#include <stdio.h>
int fact(int n);
void main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int res=fact(n);
    printf("%d",res);
}
int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}