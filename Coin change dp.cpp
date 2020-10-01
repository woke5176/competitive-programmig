#include<bits/stdc++.h>
using namespace std;
int coin(int s[],int m,int n){
	int dp[n+1]={0};
	dp[0]=1;
	for(int i=0;i<m;i++){
		for(int j=s[i];j<=n;j++){
			dp[j]+=dp[j-s[i]];
		}
	}
	return dp[n];
}
int main(){
	int n;
	cin>>n;
	int m;
	cin>>m;
	int s[m];
	for(int i=0;i<m;i++){
		cin>>s[m];
	}
	
	cout<<coin(s,m,n);
}
