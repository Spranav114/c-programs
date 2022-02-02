//Accept the Numbers From User & Perform Divion Operation

#include<stdio.h>


int Division(int ivalue1,int ivalue2)
{
  int idivide=0;

  if(ivalue2<=0)
  {
    return -1;
  }
  
  idivide=ivalue1/ivalue2;

  return idivide;
}

int main()
{
  int num1=0;
  int num2=0;
  int iret=0;

  printf("Enter the First Number:");
  scanf("%d",&num1);
  
  printf("Enter the Second Number:");
  scanf("%d",&num2);

  iret=Division(num1,num2);
  
  printf("Result is%d:\n",iret);
 
  return 0;
}