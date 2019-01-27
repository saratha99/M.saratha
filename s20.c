#include <stdio.h>
#include<conio.h>
void main()
{
   int n,i;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       n=n*i;
       printf("%d ",n);
       n=5;
   }
   getch();
}
