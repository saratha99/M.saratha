#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,n3;
scanf("%d%d%d",&n1,&n2,&n3);
if(n1>n2)
{
if(n1>n3)
{
printf("n1 greater");
}
else
{
printf("n3 greater");
}
}
elseif(n2>n3)
{
printf("n2 greater");
}
else
{
printf("n3 greater");
}
getch();
}
