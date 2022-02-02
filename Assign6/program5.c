//Write A Program Which Accept Number From User & Count Frequancy Of Such Digits Which Are less Than 6.

#include<stdio.h>

int dispalyFreq(int ino)
 {
   int idigit=0;
   int icnt=0;

   while(ino!=0)
  {
   idigit=ino%10;
   if(idigit<6)
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


//************output******

//C:\Users\HP\Desktop\Pranav>myexe.exe
//ENter The Number:2395
//3
//C:\Users\HP\Desktop\Pranav>myexe.exe
//ENter The Number:96672
//1