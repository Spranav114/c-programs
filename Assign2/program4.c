//Accept Two Numbers From USer And Display First Number In Second Number Of Times

#include<stdio.h>

void display(int ivalue1,int ivalue2)
{
  int i=0;
  
  for(i=1;i<=ivalue2;i++)
  {
    printf("%d",ivalue1);
  }
}
int main()
{ 
  int num1=0;
  int num2=0;

  printf("Enter The First Number:");
  scanf("%d",&num1);
 
  printf("Enter The Second Number:");
  scanf("%d",&num2);

 display(num1,num2);
 
 return 0;
}

//**********output********
//
//C:\Users\HP\Desktop\Pranav>myexe.exe
//Enter The First Number:4
//Enter The Second Number:5
44444
//C:\Users\HP\Desktop\Pranav>
