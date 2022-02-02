#include<stdio.h>

void Matrix(int irow,int icol)
{
 int i = 1;
 int j = 1; 
 int icnt =  0;
 for(j = 1; j <= irow; j++)
   {
     icnt = icol;
     for(i= 1; i<= icol; i++)
   { 
     printf("%d\t",icnt);
     icnt--;
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