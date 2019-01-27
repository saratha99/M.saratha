#include <stdio.h>
#include<conio.h>
void main()
{
   int fact=1,n,i;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       fact=fact*i;
   }
   printf("%d",fact);
   getch();
}
