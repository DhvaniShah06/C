//check whether number is prime or armstrong or perfect number usinf functions
#include <stdio.h>
#include <math.h>
void check(int n,int digits);
void main(){
    int n,digits;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter digits : ");
    scanf("%d",&digits);
    check(n,digits);
}
void check(int n,int digits){
   //armstrong
    int rem,temp,sum=0,per=0,m,a,count=0;
    temp=n;
    for(;n!=0;){
    rem=n%10;
    sum=sum+pow(rem,digits);
     n=n/10;
    }
    //perfect 
    for(m=1;m<temp;m++){
            if(temp%m==0){
           per=per+m;
            }
        }
        //prime
        for(a=1;a<=temp;a++){
            if(temp%a==0){
                count=count+1;
            }
        }
    if(temp==sum){
    printf("%d is Armstrong Number",sum);
}
 if(per==m){
    printf("\n%d is Perfect Number",temp);
}
 if(count==2){
    printf("\n%d is Prime Number",temp);
}
}
