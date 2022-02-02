//Accept on Number From User If Number Is Less Than 10 Then Print "Hello" Otherwise Print "Demo"

#include<stdio.h>

void display(int ino)
{
  if(ino<10)
  {
   printf("Hello");
  }
  else
  {
   printf("Demo");
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
 
 //***********output*******

//C:\Users\HP\Desktop\Pranav>myexe.exe
//Enter The Number:11
//Demo
//C:\Users\HP\Desktop\Pranav>gcc program3.c -o myexe

//C:\Users\HP\Desktop\Pranav>myexe.exe
//Enter The Number:1
//Hello