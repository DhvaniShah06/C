//reverse string without built in
#include <stdio.h>
void main(){
    int i,j;char s[100],s1[100];
    printf("Enter string : ");
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++){}s[i]='\0';i=i-1;j=i;
    for(j=0;s[i]!='\0';j++,i--){
        s1[j]=s[i];
            }
            s1[j]='\0';
            printf(" %s",s1);
}