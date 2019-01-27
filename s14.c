#include<stdio.h>
#include<conio.h>
void main()
{
int n;
scanf("%c",&n);
if(n>='a'&&n<='z'||n>='A'&&n<='Z')
{
printf("alphabet");
}
else
{
printf("not alphabet");
}
getch();
}
