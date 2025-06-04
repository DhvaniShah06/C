#include <stdio.h>
//union user defined data types
//It holds different data types in same memory location i.e  access using dot product(.)
//struct roll no diff,cpi diff,backlog diff size of structure=sum of size of all data members
//union one memory location to all size of union=size of largest member
//union at a time stores same value for all the members 
/*int a; 4byte
float 4byte
char theory 1 byte but allocation 4 byte
char c[3] 4 byte but c[5] 8 byte bcs multiple
int 4 +float 4+char 4but char arraysize more than4 +4char[5] size 4
int a 4
float f 4
double 8
char ch[3] 16  16+4+4+4+4=32
union 
int a 4
float f 4
double 8
char c[10] 10   ans 16 one 8 8ch other 8 2 ch
int a 4
float f 4
char c[10] 10  ans size 12 
4 ch so 4 char other 4 other 4 char total 8
 but maximum size is 10 so 2 times is 8 so another 4 is 12


*/
