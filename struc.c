#include <stdio.h>
#include <string.h>
 struct Books{
    char BNAME[100];
    int PAGES;
    float Price;
};
 void main(){
    int a;
    struct Books,b1,b2;
b1.Price=250.75;
b1.PAGES=150;
strcpy(b1.BNAME,"Atomic Habits");
printf("%s %d %.3f",b1.BNAME,PAGES,Price);
}