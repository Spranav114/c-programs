#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Display(char ch)
{
if((ch <= 49 && ch >= 33) || (ch <= 64 && ch >= 58) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127))
{ return true;}
else 
{ return false; }

}

int main()
{
char cValue = '\0';
bool bret = false;
printf("Enter the Character\n");
scanf("%c",&cValue);

bret = Display(cValue);
if(bret == true)
{ printf("TRUE"); }
else
{ printf("FAlSE"); }
return 0;
}