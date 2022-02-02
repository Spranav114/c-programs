#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int FirstOccurence(int Arr[],int ino,int ilength)
{
int x = 0;
int y = 0;
for(x = 0; x < ilength; x++)
{
 if(Arr[x] == ino)
 {
  y = x; 
  break;
 }
 else
 {}
}
return y;
}

int main()
{
int isize =0, icnt =0, ino2 = 0;
int iret = 0;
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
 
iret = FirstOccurence(p,ino2,isize);
printf("%d\n",iret);

free(p);
return 0;
}