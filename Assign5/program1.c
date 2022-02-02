//Write A Program Which Accept Number From User Display Its Multiplication of Fsctors.

#include<stdio.h>

int display(int ino)
{
  int i=0;
  int mul=1;
  for(i=1;i<=ino/2;i++)
  { 
   if(ino%i==0)
   {
    mul=mul*i;
   }
  }
  return mul;
}
 
    
int main()
{
  int num=0;
  int iret=0;
  
  printf("ENter The Number:");
  scanf("%d",&num);
  
  iret=display(num);
  printf("%d:",iret);
  return 0;
}




//C:\Users\HP\Desktop\Pranav>myexe.exe
//ENter The Number:12
//144:








