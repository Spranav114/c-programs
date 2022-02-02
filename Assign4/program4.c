//Write A Program Which Accept Number From User & Return Summetion Of ALl Id]ts Non Factors.


#include<stdio.h>


int displaysum(int ino)
{
  int i=0;
  int sum=0;
  for(i=1;i<=ino;i++)
  {
   if(ino%i!=0)
   {
    sum=sum+i;
   }
  }
  return sum;
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


//C:\Users\HP\Desktop\Pranav>myexe.exe
//Enter The Num: 12
//REdult is50:
