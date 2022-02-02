#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void DisplaySchedule(char ch)
{
 if(ch == 'A')
 { printf("Your exam is at 7 AM\n");  } 
 else if(ch == 'B')
 { printf("Your exam is at 8:30 AM\n"); }
 else if(ch == 'C')
 { printf("your exam is at 9:20 AM\n"); }
 else if(ch == 'D')
 { printf("your exam is at 10:30 AM\n"); }
 else 
 { printf("you hava entered invalid division"); }
}

int main()
{
char Div = '\0';

printf("enter the DIVISION\n");
scanf("%c",&Div);

DisplaySchedule(Div);

return 0;
}