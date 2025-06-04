/*$
2$
*/

#include <stdio.h>
void main(){
    int i,j,m=1;
    for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
            if(i==j){
                printf("$ ");m++;
            }
            else{
                printf("%d ",m);m++;
            }
        }
        printf("\n");
    }
}