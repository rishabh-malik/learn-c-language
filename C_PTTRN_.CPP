//         *
//	  **
//	 ***
//	****
//     *****
#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
for(i=1;i<=5;i++)
{
for(int j=5;j>i;j--)
printf(" ");
for(int k=1;k<=i;k++)
printf("*");
printf("\n");

}
getch();
}