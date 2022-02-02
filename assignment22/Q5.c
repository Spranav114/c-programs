#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void Display(char ch)
{
char c = ch;
 printf("%d\t%o\t%x",c,c,c,c);
}

int main()
{
char cValue = '\0';
printf("Enter the Character\n");
scanf("%c",&cValue);

Display(cValue);

return 0;
}