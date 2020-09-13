#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	int t;
	cin>>t;
	int a[t];
	ll mn=INT_MAX;
	ll mx=INT_MIN;
	ll diff=0;
	ll min1=0,max1=0;
	for(int i=0;i<t;i++){
		cin>>a[i];
		mn=min(mn,a[i]);
		mx=max(mx,a[i]);
	  	}
	  	diff=mx-mn;
	  	if(diff == 0)	
	{
		cout<<diff<<" "<<t*(t-1)/2<<endl;
		return 0;
	}
	
	for(int i=0;i<t;i++)
	{
		if(a[i] == mn)
			min1++;
		if(a[i] == mx)
			max1++;
	}
	
	
	cout<<diff<<" "<<min1*max1<<endl;
	return 0;
	
}
