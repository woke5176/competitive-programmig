#include<bits/stdc++.h>
using namespace std;
int tiler(int n,int m){
int dp[n+1];

	for(int i=0;i<=n;i++){
		if(i<m||i==1){
			dp[i]=1;
		}
		else if(i==m){
			dp[i]=2;
		}
		else{
			dp[i]=dp[i-1]+dp[i-m];
		}
	}
	return dp[n];
}
int main(){
	int n,m;
	cin>>n>>m;
	cout<<tiler(n,m);
}
