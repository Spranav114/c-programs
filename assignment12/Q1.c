#include<stdio.h>

void Pattern(int irow,int icol)
{
int i =0, j = 0;
char ch = 'A';
 for(i=1;  i<= irow;i++)
  {
   ch = 'A';
   for(j = 1; j<= icol;j++,ch++) 
   {
    printf("%c\t",ch);
    
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