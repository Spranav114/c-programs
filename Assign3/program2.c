//Write A Program Which Accept Number From User & Print Even Factors Of That Numbers.

#include<stdio.h>

void DisplayFactor(int ivalue)
{
  int i=0;
  
  for(i=1;i<=ivalue/2;i++)
  {
    if(i%2==0)
    {
      printf("%d\n",i);
  
    }
  }
}

int main()
{
  int num=0;
  
  printf("Enter the Number:");
  scanf("%d",&num);
 
  DisplayFactor(num);

  return 0;
}



//C:\Users\HP\Desktop\Pranav>myexe.exe
//Enter the Number:24
//2
//4
//6
//8
//10
//12
