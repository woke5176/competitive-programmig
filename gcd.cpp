#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;
inline ll gcd(ll a, ll b) {ll r; while (b) {r = a % b; a = b; b = r;} return a;}
 int main(){
 	int t;
 	cin>>t;
 	while(t--){
 		int a,b;
 		cin>>a>>b;
 		  cout<<gcd(a,b)<<endl;
	 }
 }
