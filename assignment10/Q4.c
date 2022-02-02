#include<stdio.h>

void Pattern(unsigned int iNo)
{
 int i = 0;
 
 for(i = 1;i <= iNo; i++)
 {
   printf("#\t");
   printf("%d\t",i);
   printf("*\t");
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