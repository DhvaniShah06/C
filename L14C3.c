
#include<stdio.h>
void main(){
int i,n,k,count=0,j;
printf("Enter Size : ");
scanf("%d",&n);
int a[n],b[n];
for(i=0;i<n;i++){
    printf("Enter Number : ");
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    if(a[i]==a[i+1]){
        count=count+1;
    }
}
k=n-count;
printf("No. of Unique Elements : %d",k);
printf("\n");
for(i=0;i<n;i++){
        if(a[i]==a[i+1]){
    for(j=i+1;j<=n;j++){
        a[j]=a[j+1];
    }
    }
}
for(i=0;i<n;i++){
    printf("%d ",a[i]);
}
}