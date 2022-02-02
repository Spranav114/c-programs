#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void Display(char ch)
{
if((ch >= 65) && (ch <= 90))
 {
  ch = ch + 32; 

 }
 else
 {
 ch = ch - 32;
 }
 printf("%c",ch);
}


int main()
{
char cValue = '\0';
printf("Enter the Character\n");
scanf("%c",&cValue);

Display(cValue);

return 0;
}