//Write A Program Which Accept Number From USer And Return Diifernce Between Factors And Non Factors.


#include<stdio.h>


int displaysum(int ino)
{
  int i=0;
  int sum=0;
   int sum1=0;
  for(i=1;i<ino;i++)
  {
   if(ino%i!=0)
   {
    sum=sum+i;
   }
   if(ino%i==0)
   {
     sum1=sum1+i;
   }
  }
  return sum-sum1;
}
     
int main()
{
  int num=0;
  int iret=0;
  printf("Enter The Num: ");
  scanf("%d",&num);

  iret=displaysum(num);
  printf("REdult is%d:",iret);

 return 0;
}

//**********output********
//
//C:\Users\HP\Desktop\Pranav>myexe.exe
//Enter The Num: 12
//REdult is34: