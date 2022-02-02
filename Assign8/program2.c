//Write A Program Which Accept Number From Usr & Print Numbers Till That Number.

#include<stdio.h>

void display(int ino)
{
  int i=0;
  for(i=1;i<=ino;i++)
  {
    printf("%d\t",i);
  }
}
int main()
{
  
  int num=0;

  printf("ENter The nUmber:");
  scanf("%d",&num);

  display(num);

  return 0;
}

//*******output**************

//C:\Users\HP\Desktop\Pranav>myexe.exe
//ENter The nUmber:8
//1       2       3       4       5       6       7       8
//C:\Users\HP\Desktop\Pranav>

