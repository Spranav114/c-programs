#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void digits(int Arr[],int ilength)
{
int x = 0;

for(x = 0; x < ilength; x++)
{
  if((Arr[x] <= 999) && (Arr[x] >= 100))
  {
   printf("%d\n",Arr[x]);
  }
  else
  {}
}
}

int main()
{
int isize =0, icnt =0, ino2 = 0;
int *p = NULL;


printf("enter the number no. of elements\n");
scanf("%d",&isize);


p = (int*)malloc(isize * sizeof(int));

if(p == NULL)
{
 printf("unable to allocate memory");
 return -1;
}


for(icnt = 0; icnt < isize;icnt++)
{
printf("enter the elements:");
scanf("%d",&p[icnt]);
}
 
digits(p,isize);
free(p);
return 0;
}