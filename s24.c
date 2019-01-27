#include <stdio.h>
void main()
{
    int n,j,i,k;
    scanf("%d%d",&n,&k);
    if(k<=100000)
    {
    for(j=n;j<k;j++)
    {
        i=j+1;
    if(i%2!=0)
    {
   printf("%d",i);
    }
    }
    }
   getch();
}
