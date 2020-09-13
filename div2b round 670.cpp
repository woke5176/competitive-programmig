#include<bits/stdc++.h>
using namespace std;
int main(){
int  t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			
		}
		sort(a,a+n);
			long long v=1;
		for(int i=n-1;i>=n-5;i++){
		v*=a[i];
		}
		cout<<v<<endl;
	}
}
