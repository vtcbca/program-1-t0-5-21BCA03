/* programme to print armstrong number */
#include<stdio.h>
#include<conio.h>
void main()
{
    int n=0,no,r,v;
    printf("\n enter the no:");
    scanf("%d",&no);
    v=no;
    while(no>0)
    {
       r=no%10;
       n=n+(r*r*r);
       no=no/10;
    }
    if(v==n)
    printf("\n armstrong no");
    else
    printf("\n not armstrong no");
    getch();
}