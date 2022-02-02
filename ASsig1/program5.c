//Accept One Number & Check Wheather is Divisible By 5 or Not


#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int ino)
{
  if((ino%5)==0)
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
  int num=0;

  BOOL bret=FALSE;
 
  printf("ENter Number:");
  scanf("%d",&num);
 
  bret=Check(num);
 
  if(bret==TRUE)
  {
    printf("Divisible by 5");
  }
  else
  {
    printf("Not Divisible by 5");
  }
  return 0;
}

//*************************ox**************************
//output:
//C:\Users\HP\Desktop\DHEERAJ> myexe.exe
//ENter Number:25
//Divisible by 5