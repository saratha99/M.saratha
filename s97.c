#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,N,M,hcf,lcm,t;
    scanf("%d%d",&N,&M);
    a=N;
    b=M;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    hcf=a;

    printf("%d",hcf);
    getch();
}
