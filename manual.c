#include <stdio.h>
void main(){
    int l1,l2,i,flag,max;
    char s1[100],s2[100];
    gets(s1);
    gets(s2);
    for(i=0;s1[i]!='\0';i++){
        l1++;
    }
    for(i=0;s2[i]!='\0';i++){l2++;}
    printf("%d",l1);
    max=(l1>l2)?l1:l2;
    for(i=0;i<max;i++){
if(s1[i]==s2[i]){flag=1;}
else{flag=0;}
    }
if(flag==1){printf("Same");}
else{printf("Not same");}
for(i=0;s1[i]!='\0';i++){
s2[i]=s1[i];
}
s2[i]='\0';
printf(" %s",s2);
}