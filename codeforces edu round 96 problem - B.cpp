#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
	sort(a,a+n);

	long long  ans=a[n-1];
	
for(int i=n-2;k>0&&i>=0;i--,k--){
ans+=a[i];	
}
	cout<<ans<<endl;
	}
}
