#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void ASCIITable()
{
printf("____________________________________________________________\n");
printf("__________________________ASCII TABLE________________________\n");

for(int i = 0; i <= 128; i++)
{
 
 printf("%c\t%d\t%o\t%x\n",i,i,i,i);

}


}


int main()
{

ASCIITable();


return 0;
}