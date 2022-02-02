#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int Count(char *str)
{
 int icnt = 0;
 if(*str == '\0')
 { return -1; }
 while(*str != '\0')
 {
  if(*str <= 122 && *str >= 97)  
  { icnt++; }  
  str++;
 }
 return icnt;
}

int main()
{
char arr[20];
int iret = 0;
printf("Enter the string\n");
scanf("%[^'\n']s",arr);

iret = Count(arr);
printf("%d",iret);
return 0;
}