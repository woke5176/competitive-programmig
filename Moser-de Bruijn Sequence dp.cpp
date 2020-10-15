#include<bits/stdc++.h>
using namespace std;
int sequencer(int n){
	vector<int>dp(n+1);
	dp[0]=0;
	dp[1]=1;

	for(int i=2;i<=n;i++){
		if(i%2==0)
		dp[i]=4*dp[i/2];
		else
		dp[i]=4*dp[i/2]+1;
	}
	return dp[n-1];
}
int main(){
	int n;
	cin>>n;
	cout<<sequencer(n);
}
