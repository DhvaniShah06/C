/*1  
@1
@@1
@@@@1
@@@@@1*/   

#include <stdio.h>
void main(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
            if(i==j){
                printf("1 ");
            }
            else{
                printf("@ ");
            }
        }
        printf("\n");
    }
}