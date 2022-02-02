#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



bool ChkDigit(char ch)
{
 if(ch >= '1'   && ch <= '9')
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

bret = ChkDigit(alpha);
if(bret == true)
{ printf("It is Digit"); }
else
{ printf("It is not Digit"); }
return 0;
}