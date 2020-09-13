#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	ios::sync_with_stdio(false);
	ll n,diff,min1=0,max1=0;
	int mn,mx;
	cin>>n;
	int a[n];
	
	mn=INT_MAX;
	mx =0;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
        	mn = min(mn, a[i]);
        	mx = max(mx, a[i]);
	}
 
	diff = mx-mn;
			
	if(diff == 0)	
	{
		cout<<diff<<" "<<n*(n-1)/2<<endl;
		return 0;
	}
	
	for(int i=0;i<n;i++)
	{
		if(a[i] == mn)
			min1++;
		if(a[i] == mx)
			max1++;
	}
	
	
	cout<<diff<<" "<<min1*max1<<endl;
	return 0;
}
