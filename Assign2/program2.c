//Accept the Numbers From User & Print that number of * on Screen

#include<stdio.h>


void display(int ivalue)
{
  while(ivalue>0)
  {
   printf("*");
   ivalue--;
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