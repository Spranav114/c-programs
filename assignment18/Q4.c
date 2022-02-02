#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int ilength)
{
int x = 0;
int icnt = 0;
for(x = 0; x < ilength; x++)
{
 if(Arr[x] == 11)
 { icnt++; }
 else
 {}
}
return icnt;
}





int main()
{
int isize =0, iret =0, icnt =0;
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
 
iret = Difference(p,isize);
printf("%d\n",iret);

free(p);
return 0;
}