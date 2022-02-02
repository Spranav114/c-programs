#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



bool ChkSmall(char ch)
{
 if(ch >= 'a'   && ch <= 'z')
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

bret = ChkSmall(alpha);
if(bret == true)
{ printf("It is SMALL"); }
else
{ printf("It is not SMALL"); }
return 0;
}