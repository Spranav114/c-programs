#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void Range(int Arr[],int ilength,int istart,int iend)
{
int x = 0;
int j = istart;
int y = 0;
int icnt =0;

for(x=0; x<= ilength;x++)
{

  if(Arr[x] <= iend && Arr[x] >= istart)   
  { printf("%d\t",Arr[x]); }

}



}

int main()
{
int isize =0, icnt =0, ino2 = 0;
int ien = 0, istar = 0;

int *p = NULL;


printf("enter the number no. of elements\n");
scanf("%d",&isize);

printf("enter the starting point");
scanf("%d",&istar);

printf("enter the ending point");
scanf("%d",&ien);

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
 
Range(p,isize,istar,ien);

free(p);
return 0;
}