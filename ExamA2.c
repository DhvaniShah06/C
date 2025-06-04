#include <stdio.h>
void main(){
    int n,count=0,j,i,k=0;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        printf("Enter number : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=1;j<=a[i];j++){
            if(a[i]%j==0){
                count++;
            }
        }
        if(count==2){
            b[k]=a[i];k++;
        }
        count=0;
    }
    for(j=0;j<k;j++){
        printf("%d ",b[j]);
    }
    
}