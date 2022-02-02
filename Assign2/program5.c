//Accept Number From USer & Check Whether Number Is Even or Odd

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkEven(int ino)
{
  if(ino%2==0)
  {
    return TRUE;
  }
  else
  {
    return FALSE;
  }
}
int main()
{
  int ivalue=0;
  
  BOOL iret=FALSE;

  printf("ENter Number:");
  scanf("%d",&ivalue);
  
  iret=ChkEven(ivalue);
  if(iret==0)
  {
    printf("Number is Even");
  }
  else{
  printf("Number is NOt Even");
  }
}
  
