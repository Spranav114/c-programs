#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool Difference(int Arr[],int ilength)
{
int x = 0;
int icnt = 0;
for(x = 0; x < ilength; x++)
{
 if(Arr[x] == 11)
 { icnt++;  }
 else
 {}
}
if(icnt == 0)
{ return 0; }

else 
{ return 1; }

}

int main()
{
int isize =0, icnt =0;
int *p = NULL;
bool bret = FALSE;
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
 
bret = Difference(p,isize);
if(bret == 1)
{ printf("11 is present\n"); }
else
{ printf("11 is absent\n"); }

free(p);
return 0;

}