# include <stdio.h>
//合并字符串
main()
{
char str1[50], str2[20], *ptr1 = str1, *ptr2 = str2;
printf("input str1:");
fgets(str1,50,stdin);
printf("input str2:");
fgets(str2,20,stdin);
printf("str1----str1\n");
printf("%s....%s\n", ptr1, ptr2);
while(*ptr1)ptr1++;
while(*ptr2) *ptr1++=*ptr2++;
*ptr1='\0';
ptr1=str1;
ptr2=str2;
printf("str1----str2\n");
printf("%s....%s\n",ptr1, ptr2);
}
