#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Product(int Arr[],int ilength)
{
int x = 0;
int imult = 1;
for(x = 0; x < ilength; x++)
{
 if(Arr[x] % 2 != 0)
 { imult = imult * Arr[x]; }
else
{}

}
return imult;
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
 
iret = Product(p,isize);
printf("%d\n",iret);
free(p);
return 0;
}