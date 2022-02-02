//Write A Program Which Accept Number From User & REturn The Count Of DIgits in Between 3 to 7.

#include<stdio.h>

int dispalyFreq(int ino)
 {
   int idigit=0;
   int icnt=0;

   while(ino!=0)
  {
   idigit=ino%10;
   if(idigit==3 && idigit==4 && idigit==5 && idigit==6 && idigit==7 )
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


//*********output*********
//C:\Users\HP\Desktop\Pranav>myexe.exe
//ENter The Number:8462
//4
