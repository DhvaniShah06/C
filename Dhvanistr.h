#include <stdio.h>
int LENGTH(){
    int j,length=0;
    char str1[100];
    fflush(stdin);
    printf("Enter String 1 : ");
   scanf(" %[^\n]s",str1);
    for(j=0;str1[j]!='\0';j++){
    length=length+1;
}
     return length;
}
void COMPARISON(){
    char s1[100],s2[100];
    fflush(stdin);
    printf("Enter String 1 : ");
   scanf(" %[^\n]s",s1);
   fflush(stdin);
    printf("Enter String 2 : ");
     scanf(" %[^\n]s",s2);
    
    int len1=0,len2=0,i,flag=0;
    for(len1=0;s1[len1]!='\0';len1++);
    for(len2=0;s2[len2]!='\0';len2++);
    int max=(len1>len2)?len1:len2;
    for(i=0;i<max;i++){
    if(s1[i]!=s2[i]||s1[i]>s2[i]||s1[i]<s2[i]){
            flag=1;}
            if(s1[i]==s2[i]){
                flag=0;
            }
        }
    if(flag==1){
                printf("Both Strings are not equal");
             }
             if(flag==0){
                printf("String 1 is equal to String 2");
}
}
void  COPYY(){
    char string1[100],string2[100];
     fflush(stdin);
    printf("Enter String 1 : ");
   scanf(" %[^\n]s",string1);
   fflush(stdin);
    printf("Enter String 2 : ");
     scanf(" %[^\n]s",string2);
 int  i;
 for(i=0;string2[i]!='\0';i++){
     string1[i]=string2[i];
 }
string1[i]='\0';
printf("%s",string1); 
}
void CONTANTINATION(){
    char st1[100],st2[100];
    fflush(stdin);
    printf("Enter String 1 : ");
   scanf(" %[^\n]s",st1);
   fflush(stdin);
    printf("Enter String 2 : ");
     scanf(" %[^\n]s",st2);
     fflush(stdin);
    int i,j;
    for(i=0;st1[i]!='\0';i++){
    }
    for(j=0;st2[j]!='\0';j++){
        st1[i]=st2[j];
        i=i+1;
        }
        st1[i]='\0'; 
        printf("%s",st1);
    }
   void Swap(){
        int temp,a,b;
        printf("Enter a and b : ");
        scanf("%d %d",&a,&b);
        temp=a;
        a=b;
        b=temp;
        printf("a=%d b=%d",a,b);
        
            }
    