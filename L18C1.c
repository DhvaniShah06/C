#include "Dhvanistr.h"
#include <stdio.h>
void main(){
 int n;
  printf("Enter 1 for Length");
  printf("\nEnter 2 for Copy");
  printf("\nEnter 3 for Concatenate");
  printf("\nEnter 4 for Comparison");
  printf("\nEnter n : ");
  scanf("%d",&n);
    switch(n){
      case 1 : int length=LENGTH(); printf("%d",length);break;
      case 2 :  COPYY();break;
      case 3:  CONTANTINATION(); break;
      case 4: COMPARISON();break;
      }
      }
         
            