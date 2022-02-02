#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Chkvowel(char *str)
{
 int icnt1 = 0, icnt2 = 0;
 if(*str == '\0')
 { return -1; }
 while(*str != '\0')
 {
  if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'u' )  
  { return true; }  
  else if(*str == 'A' || *str == 'E' || *str == 'O' || *str == 'I' || *str == 'U')
  {return true; }
  str++;
 }
 
}

int main()
{
char arr[20];
bool bret = 0;
printf("Enter the string\n");
scanf("%[^'\n']s",arr);

bret = Chkvowel(arr);
if(bret == true)
{
printf("vowel present");
}
else
{ printf("vowel absent"); }

return 0;
}