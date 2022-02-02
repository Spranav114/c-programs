#include<stdio.h>

void Pattern(unsigned int iNo)
{
 int i = 0;
 char ch = 'A';
 for(i = 1;i <= iNo; i++)
 {
   printf("%c\t",ch++); 
 }

}

int main()
{
unsigned int ivalue = 0;
printf("enter the number of elements");
scanf("%d",&ivalue);

Pattern(ivalue);
return 0;

}