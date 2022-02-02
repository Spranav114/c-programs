//Write a program Which Accept N & Print First 5 multiple Of N.

#include<stdio.h>

void display(int ino)
{
  int i=0;
  
  for(i=ino;i<=ino;i++)
  {
    if(i*5)
    {
    printf("%d\t",i);
    }
  }
}
int main()
{
  int num=0;

  printf("Enter The number:");
  scanf("%d",&num);
  
  display(num);
  return 0;
}