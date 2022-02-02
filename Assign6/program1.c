//Write A Program Which Accept Number From USer & Display Its Digits In REverse Oreder.

//input:2395
//output:5  9  3  2
#include<stdio.h>

void returnDigit(int ino)
{
  int idigit=0;
  if(ino<=0)
  {
    ino=-ino;
  }
 while(ino!=0)
  {
   idigit=ino%10;
   
   printf("%d\n",idigit);
   ino=ino/10;
 }
}



int main()
{
  int num=0;
  
  printf("Enter The Number:");
  scanf("%d",&num);
 
  returnDigit(num);
  
  return 0;
}


//C:\Users\HP\Desktop\Pranav>myexe.exe
//Enter The Number:1018
//8
//1
//0
//1
