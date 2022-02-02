//Write a Program Which Accepts N From User Print All ODD numbers UP TO N.

#include<stdio.h>

void display(int ino)
{
  int i=0;
  
  for(i=1;i<ino;i++)
  {
    if(i%2!=0)
    {
      printf("%d\t",i);
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


//****************output*********

//C:\Users\HP\Desktop\Pranav>gcc program4.c -o myexe

//C:\Users\HP\Desktop\Pranav>myexe.exe
//Enter The Number:18
//1       3       5       7       9       11      13      15      
//C:\Users\HP\Desktop\Pranav>