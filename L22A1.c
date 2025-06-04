//create open and close a file
#include <stdio.h>
void main(){
    FILE *fp;
    fp=fopen("L4A1.c","r");
       char a=getc(fp);
    while(a!=EOF){
       a=getc(fp);
          printf("%c",a);
    }
    fclose(fp);
}