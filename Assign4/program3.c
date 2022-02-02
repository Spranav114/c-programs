//Write A Program Which Accept Number From USer & Display All Its non Factors.

//input:12
//output:5 7 8 9 10 11

#include<stdio.h>

void dispalyReturn(int ino)
{
  int i=0;
  
  for(i=1;i<=ino;i++)
  {
    if(ino%i!=0)
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

  dispalyReturn(num);

  return 0;
 }

**************output***********
//C:\Users\HP\Desktop\Pranav>myexe.exe
//Enter The Number:12
//5       7       8       9       10      11
