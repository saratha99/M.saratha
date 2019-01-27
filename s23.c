#include<stdio.h>
#include<conio.h>
void main()
{
  int n,flag=1,i;
  scanf("%d",&n);
  if(n<=1000)
  {
  for(i=2;i<n/2;i++)
  {
      if(n%i!=0)
      flag=1;
      break;
  }
  
  if(flag==1)
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
