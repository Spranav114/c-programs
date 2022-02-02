#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void Display(char ch)
{
char c = ch;
while(c >= 65 && c <= 90)
{
 printf("%c\t",c);
 c++;
}
while(c >= 97 && c <= 122)
{
 printf("%c\t",c);
 c--;
}

}

int main()
{
char cValue = '\0';
printf("Enter the Character\n");
scanf("%c",&cValue);

Display(cValue);

return 0;
}