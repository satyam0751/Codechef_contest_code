#include<stdio.h>
int main()
{
  int n,r;
  scanf("%d%d",&n,&r);
  while(n--)
  {
      int n1;
      scanf("%d",&n1);
      if(n1>=r)
        printf("Good boi\n");
      else
        printf("Bad boi\n");
  }
}