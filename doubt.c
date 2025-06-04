#include <stdio.h>
void replace(char *s1,char m);
void main(){
    char s1[100],a,m;
    printf("Enter string : ");
    scanf("%[^\n]s",s1);
    printf("Which character to replace : ");
    scanf(" %c",&m);
replace(s1,m);
}
void replace(char *s1,char m){
    int i;char a;
    for(i=0;s1[i]!='\0';i++){
        if(s1[i]==m){
            printf("Enter Character : ");
            scanf(" %c",&a);
            s1[i]=a;
        }
    }
    s1[i]='\0';
    printf("%s",s1);
}
