#include<stdio.h>
#include<conio.h>
void main()
{
    int n,rem,c=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        c=c+1;
        n=n/10;
    }
    printf("count=%d",c);
    
}
