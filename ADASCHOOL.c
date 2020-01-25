#include<stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
     int n,m;
     scanf("%d%d",&n,&m);
     if(n%2==0&&m%2==0)
     printf("YES\n");
     else if(n%2==1&&m%2==1)
     printf("NO\n");
     else
     printf("YES\n");
  }
}