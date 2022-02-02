//Write A Program which accepts number from user and return multiplication of all digits.
#include<stdio.h>

int dispalyFreq(int ino)
 {
   int idigit=0;
   int imul=1;
   int icnt=1;
  
   if(ino<=0)
   {
     ino=-ino;
   }
   while(ino!=0)
  {
   idigit=ino%10;
   if(idigit==0)
   {
     idigit=icnt;
   }
   imul=idigit*imul;

   ino=ino/10;
  }
   return imul;
  
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


//*********output*********


//C:\Users\HP\Desktop\Pranav>myexe.exe
//ENter The Number:1018
//8