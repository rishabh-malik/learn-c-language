#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char c;
printf("enter the character whose ASCII code you want to see:");
scanf("%c",&c);
printf("the ASCII code is %c=%d",c,c);
getch();
}