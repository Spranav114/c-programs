#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void strlwrXX(char src[], char dest[])
{
if(src == NULL)
{ printf("invalid"); }

while(*src != '\0')
{
 if((*src >= 'A') && (*src <= 'Z'))
 {
  *dest = *src + 32;
 }
 else
 {
  *dest = *src;
 }
 src++;
 dest++;
}
*dest ='\0';

}

int main()
{
char arr[20];
char brr[20];
int iret = 0;
printf("Enter the string\n");
scanf(" %[^'\n']s",arr);

strlwrXX(arr,brr);


printf("Afer copy String is : %s\n",brr);
return 0;
}