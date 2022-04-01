/* write a programme to print sum */
#include<stdio.h>
#include<conio.h>
void main()
{
      int a,b=0,c;
      clrscr();
      printf("\n enter a value:");
      scanf("%d",&a);
      while(a>0)
      {
	  c=a%10;
	  b=b+c;
	  a=a/10;
      }
      printf("sum is %d",b);
      getch();
}
