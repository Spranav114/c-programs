#include<stdio.h>
#include<stdlib.h>
void Difference(int Arr[],int ilength)
{
int x = 0;
int isum1 = 0, isum2 = 0;

for(x = 0; x < ilength; x++)
{
 if(Arr[x] % 5 == 0 && Arr[x] % 2 == 0  )
 printf("%d\n",Arr[x]);
 else {}
}

}





int main()
{
int isize =0, icnt =0;
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

Difference(p,isize);

free(p);
return 0;
}