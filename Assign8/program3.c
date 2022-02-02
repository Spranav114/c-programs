//Write A Program Which Accept Number From USer & PRint its Number LIne.

#include<stdio.h>

void display(int ino)
{
  int i=0;
  for(i=-ino;i<=ino;i++)
  {
    printf("%d\t",i);
  }
}
int main()
{
  int num=0;

 printf("ENter The nUmber\n");
 scanf("%d",&num);
  
 display(num);
 return 0;
}
 
//***********output**********

//C:\Users\HP\Desktop\Pranav>myexe.exe
//ENter The nUmber
//4
//-4      -3      -2      -1      0       1       2       3       4
//C:\Users\HP\Desktop\Pranav>






