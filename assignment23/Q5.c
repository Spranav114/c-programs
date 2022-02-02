#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool ChkVowel(char *str)
{
int icnt = 0,i =0;
char brr[20];
while(*str != '\0')
{
  str++;
  icnt++;
}
str--;
icnt--;
for(i =0; i <= icnt; i++)

{
 brr[i] = *str;
 str--;
}
brr[icnt+1] = '\0';
 printf("%s",brr);
}

int main()
{
char arr[20];

printf("Enter the string\n");
scanf("%[^'\n']s",arr);

ChkVowel(arr);

return 0;
}