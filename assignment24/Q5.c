
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int countvoid(char *src)
{
int icnt = 0;
while(*src != '\0')
 {
  if(*src == ' ')
   { icnt++; }
  else
   {}
  src++;
 }
return icnt;
}

int main()
{
char arr[20];
int iret = 0;

printf("Enter the string\n");
scanf("%[^'\n']s",arr);

iret = countvoid(arr);
printf("%d\n",iret);
return 0;
}