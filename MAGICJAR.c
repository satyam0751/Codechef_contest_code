#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int arr[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		long long int s=0;
		for(int i=0;i<n;i++)
        {
            s=s+arr[i];
        }
        s=s-n+1;
        printf("%lld\n",s);

	}
}
