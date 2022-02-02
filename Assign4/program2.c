//Write A Program Which Accepts Number From User & Display its Factors in Decewasing order.

#include<stdio.h>

void display(int ino)
{
  int i=0;
  
  for(i=ino/2;i<=ino;i--)
  {
   if(ino%i==0)
   {
    printf("%d:",i);
   }
  }
}
int main()
{
  int num=0;

  printf("Enter The Number:");
  scanf("%d",&num);
  
  display(num);
  return 0;
}

//C:\Users\HP\Desktop\Pranav>myexe.exe
//Enter The Number:12
//6:4:3:2:1: