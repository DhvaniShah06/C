//Find all prime numbers between given intervals
#include <stdio.h>
void Find(int,int);
void main(){
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    Find(a,b);
}
void Find(int a,int b){
int i=1,count=0,c;
c=a+1;  //if also check a and b a<=b erase c 
    for(;c<b;c++){
        for(i=1;i<=c;i++){
        if(c%i==0){
            count=count+1;
        }
        }
        if(count==2){
            printf("%d is Prime Number\n",c);
            count=0;
        }
        count=0;
        }
        }


