#include<stdio.h>
#include<conio.h>
void main()
{
  int n,n1,rev,r;
  scanf("%d",&n);
  n1=n;
  if(n<=1000)
  while(n!=0)
  {
      r=n%10;
      rev=rev*10+r;
      n=n/10;
  }
  if(n1==rev)
  {
      printf("yes");
  }
  else
  {
      printf("no");
  }
  }
  getch();
}
