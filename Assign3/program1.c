//Write A Program Which Accept One Number From User & Print That Number Of "Even" Numbers On Screen.
#include<stdio.h>

void DisplayEven(int ivalue)
{
  int i=0;
  
  for(i=1;i<=ivalue*2;i++)
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
  
  printf("Enter The Number:");
  scanf("%d",&num);


  DisplayEven(num);
  return 0;
}

///***************output**************

//C:\Users\HP\Desktop\Pranav>gcc program1.c -o myexe

//C:\Users\HP\Desktop\Pranav>myexe.exe
//Enter The Number:7
//2
//4
//6
//8
//10
//12
//14