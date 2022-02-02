//Accept One NUMBER From User And Print That Number Of * on Screen

#include<stdio.h>

void display(int ino)
{ 
  int i=1;
  
  for(i=1;i<=ino;i++)
  {
   printf("*");
  }
}
int main()
{

  int num=0;
  
  printf("ENter The Number:");
  scanf("%d",&num);

  display(num);
  return 0;

}

//***********************output***************************************
    

//C:\Users\HP\Desktop\DHEERAJ>gcc program6.c -o myexe

//C:\Users\HP\Desktop\DHEERAJ> myexe.exe
//ENter The Number:5
//*****
