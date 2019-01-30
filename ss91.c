#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,diff;
    clrscr();
    scanf("%d%d",&a,&b);
if( a>b )
        diff=a-b;
    else
        diff=b-a;
        printf("%d",diff);
        getch();
}
