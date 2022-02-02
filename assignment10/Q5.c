#include<stdio.h>

void Pattern(unsigned int iNo)
{
 int i = 1;
 int x = 1;
 for(i = 1;i <= iNo; i++)
 {  
  printf("%d\t",i*2);
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