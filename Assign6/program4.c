//write A Program Which Accept Number From User & Count Frequancy of 4 in it.

#include<stdio.h>

int dispalyFreq(int ino)
 {
   int idigit=0;
   int icnt=0;

   while(ino!=0)
  {
   idigit=ino%10;
   if(idigit==4)
   {
    icnt++;
   }
   ino=ino/10;
  }
   return icnt;
  
}

int main()
{
  int num=0;
  int iret=0;
  printf("ENter The Number:");
  scanf("%d",&num);

  iret=dispalyFreq(num);
  
  printf("%d",iret);
  return 0;
}

//************output********

//C:\Users\HP\Desktop\Pranav>myexe.exe
//ENter The Number:2395
//0
//C:\Users\HP\Desktop\Pranav>myexe.exe
//ENter The Number:9440
//2