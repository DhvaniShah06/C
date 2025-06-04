//addition of second and second last element
#include <stdio.h>
void main(){
    int n,i;
    printf("Enter n : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter Number : ");
        scanf("%d",&a[i]);
    }
    printf("Additon : %d",a[1]+a[n-2]);
}