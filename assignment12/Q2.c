#include<stdio.h>

void Pattern(int irow,int icol)
{
int i =0, j = 0;
char ch1 = 'A';
char ch2 = 'a';
 for(i=1;  i<= irow;i++)
  {
   ch1 = 'A';
   ch2 = 'a';
   for(j = 1; j<= icol;j++,ch1++) 
   {
     if(i%2 == 0)
     { printf("%c\t",ch2); }
     else
     { printf("%c\t",ch1); }
   ch2++; 
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