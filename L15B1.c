//delete all duplicate elements
#include <stdio.h>
void main(){
    int size,i,j;
    char c='A';
    printf("Enter Size : ");
    scanf("%d",&size);
    int a[size],b[size];
     for(i=0;i<size;i++){
        printf("Enter Number : ");
        scanf("%d",&a[i]);
    }
     for(i=0;i<size;i++){
    for(j=i+1;j<size;j++){  
           if(a[i]==a[j]&&c!=a[i]){
            b[i]=a[i];
        }
    }
    }
    for(i=0;i<size;i++){
        if(b[i]!=a[i]){
        printf(" %d ",a[i]);
    }}
}
