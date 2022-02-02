// Write A Program Which Accept Number From User & Cgheck Whether It Contains 0 in it or nnot.


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int ino)
{
  int idigit=0;
 
  idigit=ino%10;
  ino=ino/10;
  
  if(idigit==0)
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
  int iret=0;
   
  printf("Enter Number:");
  scanf("%d",&num);
 
  iret=ChkZero(num);
  
  if(iret==TRUE)
  {
    printf("It Contains Zero");
  }
  else
  {
    printf("Not Zero");
  }
} 
  
  


//C:\Users\HP\Desktop\Pranav>myexe.exe
//Enter Number:9000
//It Contains Zero
//C:\Users\HP\Desktop\Pranav>gcc program2.c -o myexe

//C:\Users\HP\Desktop\Pranav>myexe.exe
//Enter Number:2395
//Not Zero