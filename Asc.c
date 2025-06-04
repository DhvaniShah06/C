#include<stdio.h>
void main(){
    int i,min,n,j;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n],b[n],c;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
     for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
           c=a[j];
           a[j]=a[i];
           a[i]=c;

     }
     }
      printf("%d ",a[i]); 
    }}
