#include<stdio.h>

void Pattern(int irow,int icol)
{
 int i=0,j=0;

 for(i = irow; i >= 1; i--)
  {
    for(j = 1; j<=icol; j++)
     {
      if(i>j || i<j)
      {
       printf("*\t");
      }
      else
      {printf("#\t");}
     }
  printf("\n");
  }
}

int main()
{
int ivalue1 =0;
int ivalue2 =0;

printf("enter no. of rows\n");
scanf("%d",&ivalue1);

printf("enter no. of column\n");
scanf("%d",&ivalue2);


Pattern(ivalue1,ivalue2);
return 0;

}