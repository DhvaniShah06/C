#include <stdio.h>


/*printf("Enter n : ");
scanf("%d",&n);
int result=add(n);
printf("%d",result);
}
int add (int n){
    if(n==0){
        return 0;
    }
    else {
        return n%10+add(n/10);
    }
}
/*printf("Enter n : ");
scanf("%d",&n);
int result=digits(n);
printf("%d",result);
}*/
//recursive 
/*    int n=5;
int result=fact(n);
printf("%d",result);
}
    int fact(int n){
        if(n==1){
            return 1;
        }
        else{
            return n*fact(n-1);
        }
        }
    */
   //stack 
   /*
   fact1 return 0              here 1 and erase
   fact(12) return 1+fact1          here 1 +1
   fact(123) return 1+fact12    here 1+2(fact 12 noxretuen is 2 so)*/