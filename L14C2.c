//missing number in sequence
#include <stdio.h>
void main(){
    int n,i,j,count=0;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        printf("Enter Number : ");
        scanf("%d",&a[i]);
    }
    j=a[0];
    for(i=0;i<n,j<a[n-1];i++,j++){
        if(a[i]!=j){
         printf("%d ",j);
         i--;
        }
    }
    

    }

