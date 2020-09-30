#include<bits/stdc++.h>
using namespace std;
int tiler(int n){
	int dp[n+1];
	dp[0]=1;
	for(int i=1;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
}
int main(){
	int n;
	cin>>n;
	cout<<tiler(n);
}
