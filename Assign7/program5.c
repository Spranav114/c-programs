//Write A Program which accepts number from user and return Differnce Between Summation of EVEN Digits & SUmmation Of ODD Digits.

#include<stdio.h>

int dispalyFreq(int ino)
 {
   int idigit=0;
   
   int isum=0;
   int isum1=0;
  
   if(ino<=0)
    {
      ino=-ino;
    }
   while(ino!=0)
   {
    idigit=ino%10;

    if(ino%2 ==0)
     {
      isum = isum + idigit;
     }
    else(idigit%2!=0)
     {  
     isum1 = isum1 + idigit;
     }
   
   ino=ino/10;
  }
   return isum+isum1;  
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