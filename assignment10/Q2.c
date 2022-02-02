#include<stdio.h>

void Pattern(unsigned int iNo)
{
 int i = iNo;
 
 for(i = iNo;i >= 1; i--)
 {
   printf("%d\t",i);
   printf("#\t");
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