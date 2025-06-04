//negative number to binary
#include <stdio.h>
void main(){
int bin[32],a[32],c[32],n,i,rem,m,count=0;
printf("Enter n : ");
scanf("%d",&n);
for(i=0;i<32;i++){
    int rem=n%2;
    bin[i]=rem;
    n=n/2;
}
 for(i=0;i<32;i++){
    printf("%d",bin[i]);
 }
 for(i=31;i>=0;i--){
    a[m]=bin[i];
    printf(" %d",a[m]);
     }
 for(m=31;m>=0;m--){
if(a[m]%10==0&&count==0){
   c[m]=0;
   a[m]=a[m]/10;
}
else if(a[m]%10==1&&count==0){
   count=count+1;
   a[m]=a[m]/10;
}
else if(a[m]%10==1&&count==1){
c[m]=0;
a[m]=a[m]/10;
}
else if(a[m]%10==0&&count==1){
   c[m]=1;
   a[m]=a[m]/10;
}
 }
  for(m=1;m<31;m++){
   printf(" %d",c[m]);
  }
 }
 


 
