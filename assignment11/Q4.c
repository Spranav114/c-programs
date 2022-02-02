#include<stdio.h>

void Matrix(int irow,int icol)
{
 int i = 1;
 int j = 1; 

 for(i = 1; i <= irow; i++)
   {
     for(j= 1; j<= icol; j++)
   { 
     if(j % 2 == 0)
      {
       printf("#\t");
      } 
     else
      {
       printf("*\t");
      }
   }
    printf("\n");
   } 

}

int main()
{
int num1 = 0;
int num2 = 0;

printf("enter number of rows");
scanf("%d",&num1);

printf("enter number of columns");
scanf("%d",&num2);

Matrix(num1,num2);
return 0;

}