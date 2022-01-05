/* programme to print reverse number
date=22/12/21 */
#include<stdio.h>
#include<conio.h>
void main()
{
      int a,b=0,c;
      clrscr();
      printf("\n enter a number:");
      scanf("%d",&a);
      while(a!=0)
      {
	  c=a%10;
	  b=b*10+c;
	  a/=10;
      }
      printf("\n reversed number:%d",b);
      getch();
      }

