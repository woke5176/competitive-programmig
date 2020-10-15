// fibonacci using dynamic programming

#include<bits/stdc++.h>
using namespace std;
int fib(int n){
	vector<int>v(n,0);
	v[0]=1;
	v[1]=1;
	for(int i=2;i<n;i++)
	{
		v[i]=v[i-1]+v[i-2];
	}
return v[n-1];
}
int main(){
	int n;
	cin>>n;
	cout<<fib(n);
}
