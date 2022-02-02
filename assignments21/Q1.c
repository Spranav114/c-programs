#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



bool ChkAlpha(char ch)
{
 if((ch <= 'z' && ch >= 'a') || (ch >= 'A'   && ch <= 'Z'))
 { return true; } 
 else
 { return false; }


}

int main()
{
char alpha = '\0';
printf("enter the alphabet\n");
scanf("%c",&alpha);

bool bret;

bret = ChkAlpha(alpha);
if(bret == true)
{ printf("It is character "); }
else
{ printf("It is not a character"); }
return 0;
}