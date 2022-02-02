//Write A Program Which Accept Number FromUser & Print That Number Of $ & * on screen

#include<stdio.h>

void displayN(int ino)
{
  int i=0;
  for(i=1;i<=ino;i++)
  {
    printf("\t$ \t *");
  }
}

int main()
{
  int num=0;
 
  printf("ENter The NUmber:\n");
  scanf("%d",&num);

  displayN(num);
  return 0;
}


//*****output***********

//C:\Users\HP\Desktop\Pranav>myexe.exe
//ENter The NUmber:
//5   
//  $        *      $        *      $        *      $        *      $        *
//C:\Users\HP\Desktop\Pranav>





