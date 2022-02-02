#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0



bool Difference(int Arr[],int ino,int ilength)
{
int x = 0;
int icnt = 0;
for(x = 0; x < ilength; x++)
{
 if(Arr[x] == ino)
 { icnt++; }
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
int isize =0, icnt =0, ino2 = 0;
bool bret = FALSE;
int *p = NULL;
printf("enter the number\n");
scanf("%d",&ino2);

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
 
bret = Difference(p,ino2,isize);
if(bret == 1)
{ printf("TRUE"); }
else
{ printf("FALSE"); }

free(p);
return 0;
}