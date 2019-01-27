#include<stdio.h>
#include<conio.h>
void main()
{
  int n1,i,n2,n3;
  scanf("%d%d",&n1,&n2);
  
  for(i=n1;i<n2;i++)
  {
  n3=i+1;
  if(n3%2==0)
  {
      printf("%d",n3);
  }
  }
  getch();
}
