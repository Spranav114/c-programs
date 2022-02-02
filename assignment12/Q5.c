#include<stdio.h>

void Pattern(int irow,int icol)
{
int i =0, j = 0,k = 1;

 for(i=1;  i<= irow;i++)
  {

   for(j = 1; j<= icol;j++) 
   {
    printf("%d\t",k); 
    k++;
   }
   
  printf("\n");
  }
}

int main()
{
unsigned int x = 0;
unsigned int y = 0;

printf("enter the number of rows\n");
scanf("%d",&x);


printf("enter the number of columns\n");
scanf("%d",&y);

Pattern(x,y);
return 0;

}