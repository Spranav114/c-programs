#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int Chkfre(char *str)
{
 int icnt1 = 0, icnt2 = 0;
 if(*str == '\0')
 { return -1; }
 while(*str != '\0')
 {
  if(*str >= 65 && *str <= 90 )
  { icnt1++; }
  
  else if(*str >= 97 && *str <= 122)
  { icnt2++; }
 
  str++;
 } 
return icnt1 - icnt2;
}

int main()
{
char arr[20];
int iret = 0;
printf("Enter the string\n");
scanf("%[^'\n']s",arr);

iret = Chkfre(arr);
printf("%d\n",iret);
return 0;
}