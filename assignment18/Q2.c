#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int ilength)
{
int x = 0;
int icnt1 = 0, icnt2 = 0;
for(x = 0; x < ilength; x++)
{
 if(Arr[x] % 2 == 0)
 { icnt1++; }
 else
 { icnt2++; }
}
return icnt1 - icnt2;
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