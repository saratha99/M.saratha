#include <stdio.h>

void main()
{
    int n,s=1,i,k;
    scanf("%d%d",&n,&k);
    for(i=0;i<k;i++)
    {
        s=s*n;
    }
   printf("%d",s);
   getch();
}
