#include<bits/stdc++.h>
using namespace std;
int finder(int n,int r,int p){
	 if (r > n - r) 
        r = n - r; 
  
	int dp[r+1];
	memset(dp, 0, sizeof(dp)); 
  
	dp[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=min(i,r);j>0;j--){
			dp[j]=(dp[j]+dp[j-1])%p;
		}
	}
	return dp[r];
}
int main(){
	int n,r,p;
	cin>>n>>r>>p;
	cout<<finder(n,r,p);
}
