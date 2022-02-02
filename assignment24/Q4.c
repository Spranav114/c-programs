
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void strlwrXX(char *src)
{
while(*src != '\0')
{
 if(*src == '0' || *src == '0' || *src == '1' || *src == '2' || *src == '3' || *src == '4' || *src == '5' || *src == '6' || *src == '7' ||*src == '8' || *src == '9')
 { printf("%c",*src); }
 else
 {}
src++;

}
}

int main()
{
char arr[20];

printf("Enter the string\n");
scanf("%[^'\n']s",arr);

strlwrXX(arr);

return 0;
}