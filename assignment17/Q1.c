#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int ilength)
{
int x = 0;
int isum1 = 0, isum2 = 0;

for(x = 0; x < ilength; x++)
{
 if(Arr[x] % 2 == 0 )
 { isum1 = isum1 + Arr[x]; }
 else
 { isum2 = isum2 + Arr[x]; }
}

return isum1 - isum2;
}





int main()
{
int isize =0, iret = 0, icnt =0;
int *p = NULL;
printf("enter the number no. of elements\n");
scanf("%d",&isize);

p = (int*)malloc(isize * sizeof(int));

if(p == NULL)
{
 printf("unable to allocate memory");
 return -1;
}

printf("enter the elemens\n");

for(icnt = 0; icnt < isize;icnt++)
{
printf("enter the elements:");
scanf("%d",&p[icnt]);
}

iret = Difference(p,isize);
printf("result is %d",iret);

free(p);
return 0;




}