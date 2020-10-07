#include<bits/stdc++.h>
using namespace std;
int helper(int i,int j,string s1,string s2,vector<vector<int>>&dp){
        if(i>=s1.size() || j>=s2.size()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
         if(s1[i]==s2[j]){
             return 1+helper(i+1,j+1,s1,s2,dp);
         }
        else{
            int left = helper(i+1,j,s1,s2,dp);
            int right = helper(i,j+1,s1,s2,dp);
            return dp[i][j]= max(left,right);
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
      
        int n = text1.size();
        int m = text2.size();
         vector<vector<int>>dp(n,vector<int>(m,-1));
        return helper(0,0,text1,text2,dp);
    }
int main(){
	string s1,s2;
	cin>>s1>>s2;
cout<<longestCommonSubsequence(s1,s2);
	
}
