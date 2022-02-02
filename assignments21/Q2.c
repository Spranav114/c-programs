#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



bool ChkCapital(char ch)
{
 if(ch >= 'A'   && ch <= 'Z')
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

bret = ChkCapital(alpha);
if(bret == true)
{ printf("It is Capital "); }
else
{ printf("It is not Capital"); }
return 0;
}