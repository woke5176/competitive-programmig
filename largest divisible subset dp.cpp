#include<bits/stdc++.h>
using namespace std;
int finder(int a[],int n){
	int dp[n];
	dp[n-1]=1;
	for(int i=n-2;i>=0;i--){
		int m=0;
		for(int j=i+1;j<n;j++){
			if(a[i]%a[j]==0 || a[j]%a[i]==0){
			m=max(m,dp[j]);	
			}
			
		}
		dp[i]= 1+m;
	}
return *max_element(dp, dp + n); 
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
// considering sorted array else sort the data given
	cout<<finder(a,n);
}
