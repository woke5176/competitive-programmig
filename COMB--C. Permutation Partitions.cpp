#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n,k;
	cin>>n>>k;
	vector<int>v(n+1);
	vector<int>v1;
	for(int i=1;i<=n;i++){
		cin>>v[i];
	}
	int res=0;
	for(int i=1;i<=n;i++){
		if(v[i]>=n-k+1){
			res+=v[i],v1.push_back(i);
		}
	}
	ll perm=1;
	for(int i=0;i+1<v1.size();i++){
		perm*= v1[i + 1]-v1[i];
	}
	cout<<res<<" "<<perm<<endl;
}
