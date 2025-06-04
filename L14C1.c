//Duplicate elements
#include <stdio.h>
void main(){
    int n,i,j,count=0;
    char c='A';
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter Number : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){  
           if(a[i]==a[j]&&c!=a[i]){
            count=count+1;
        }
    }
c=a[i];
    }
    printf("Duplicate Elements : %d",count);
}