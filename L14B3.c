//Ascending Order
#include <stdio.h>
void main(){
    int n,i,j,c;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter Number : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)
            if(a[i]>a[j]){
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }  
        }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    }
