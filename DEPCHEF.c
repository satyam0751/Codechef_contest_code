#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int arr1[n];
		int arr2[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr1[i]);
		}
		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr2[i]);
		}
		int p=0;
		int arr3[n];
		for(int i=1;i<n-1;i++)
		{
			if((arr1[i-1]+arr1[i+1])<arr2[i])
			{
				p++;
				arr3[p-1]=arr2[i];
			}
		}
		if((arr1[1]+arr1[n-1]<arr2[0]))
		{
			arr3[p]=arr2[0];
		}
		else
		{
			arr3[p]=0;
		}
		if((arr1[0]+arr1[n-2]<arr2[n-1]))
		{
			arr3[p+1]=arr2[n-1];
		}
		else
		{
			arr3[p+1]=0;
		}
		int max=0;
		for(int i=0;i<p+2;i++)
		{
			if(max<=arr3[i])
			{
				max=arr3[i];
			}
		}
		if(max>0)
			printf("%d\n",max);
		else
			printf("-1\n");
	}
}