#include<stdio.h>
#include<string.h>
int main()
 {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		char s[201];
		int a[26];
			for(int j=0;j<26;j++)
			{
				a[j]=0;
			}
			
		for(int i=0;i<n;i++)
		{
			scanf("%s",s);
			int arr[201];
			
            for(int k=0;k<strlen(s);k++)
            {
            	arr[k]=s[k]-97;
            	  
            	if(a[arr[k]]==(i))
            	{   
            	     	a[arr[k]]++;
            	}
            	else
            	a[arr[k]]==0;
            }
           
		}
		int sum=0;
	for(int i=0;i<26;i++)
	    {
		     if(a[i]==n)
		     {
		     	sum++;
		     }
	    }
	    printf("%d\n",sum);	
    }
}
