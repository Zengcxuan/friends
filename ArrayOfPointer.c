#include <stdlib.h>
#include <stdio.h>
//指针数组练习
main()
{
char *ptr1[4]={"china","chengdu","sichuang","chongqin"};
int i,*ptr2[3],a[3]={1,2,3},b[3][2]={1,2,3,4,5,6};
for(i=0;i<4;i++)
printf("\n%s",ptr1[i]); 
printf("\n");
for(i = 0; i < 3; i++)
ptr2[i]=&a[i]; 
for(i = 0; i < 3; i++) 
printf("%4d", *ptr2[i]);
printf("\n");
for(i = 0 ; i < 3; i++)
ptr2[i]=b[i]; 
for(i = 0; i < 3; i++) 
printf("%4d%4d\n" , *ptr2[i] , *ptr2[i] + 1) ;
}
