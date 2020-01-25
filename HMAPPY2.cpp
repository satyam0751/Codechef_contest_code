 #include<iostream>
 #include<bits/stdc++.h>
 #include <boost/math/common_factor.hpp> 
 using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,k;
		long long int a,b;
		scanf("%lld%lld%lld%lld",&n,&a,&b,&k);
	long long int sum1,sum2,sum3;
	sum1=n/a;
	sum2=n/b;
	long long int c=boost::math::lcm(a,b);
	sum3=n/c;
	long long int r=(sum1)+(sum2)-(2*sum3);
		if(r>=k)
		printf("Win\n");
		else
		printf("Lose\n");
	}
}
		
	