#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int digits(int Arr[],int ilength)
{
int x = 0;
int ilarge = Arr[x];
int ismall = Arr[x];
for(x = 0; x < ilength; x++)
{
  if(Arr[x] > ilarge )
  {
   ilarge = Arr[x];
  }
  else if(Arr[x] <= ismall)
  {
   ismall = Arr[x];
  }
    
}

return (ilarge-ismall);
}

int main()
{
int isize =0, icnt =0, ino2 = 0;
int *p = NULL;
int iret = 0;

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
 
iret = digits(p,isize);
printf("%d\n",iret);

free(p);
return 0;
}