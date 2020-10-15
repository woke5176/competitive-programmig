#include <bits/stdc++.h>
using namespace std;
int main(){
  // element to be printed
  int n;cin>>n;
  int dp[n+1];
  dp[0] = 0;
  dp[1] = dp[2] = 1;
  for(int i=3;i<=n;i++)
    dp[i] = dp[dp[i-1]] + dp[i-dp[i-1]];
  cout<<dp[n];
}

