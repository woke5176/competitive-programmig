#include<bits/stdc++.h>
using namespace std;
int gold(vector<vector<int>>&mt,int n,int m){
	int dp[n+1][m+1];
	for(int j=m-1;j>=0;j--){
		for(int i=n-1;i>=0;i--){
			if(j==m-1){
			dp[i][j]=mt[i][j];
			}
		else if(i==0){
			dp[i][j]=mt[i][j]+max(mt[i][j+1],mt[i+1][j+1]);
		}
		else if(i==m-1){
			dp[i][j]= mt[i][j]+max(mt[i][j+1],mt[i-1][j+1]);
		}
		else{
			dp[i][j]=mt[i][j]+max(mt[i][j+1],max(mt[i-1][j+1],mt[i+1][j+1]));
		}
	}
}
	int maxm=dp[0][0];
	for(int i=1; i<n-1;i++){
		if(dp[i][0]>maxm){
			maxm=dp[i][0];
		}
	}
	return maxm;
}
int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<int>>mt(n,vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>mt[n][m];
		}
	}
	gold(mt,n,m);
}
