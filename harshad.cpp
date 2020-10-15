#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0,r,m,div;
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	if(m%sum==0)
		printf("Harshad number");
	else
		printf("not");

}
