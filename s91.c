#include<stdio.h>
#include<conio.h>
void main()
{
    int n1[10],n2[10],t,n3[10],i;
    clrscr();
    scanf("%d",&t);
   for(i=0;i<t;i++)
   {
        scanf("%d%d",&n1[i],&n2[i]);
        
   }
   for(i=0;i<t;i++)
   {
       n3[i]=n1[i]-n2[i];
       printf("%d",n3[i]);
   }
   getch();
    
}
