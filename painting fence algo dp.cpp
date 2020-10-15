#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll n;
ll k;
int mod = 1000000007;
	cin>>n>>k;
	ll same =k;
	ll diff = k*k-1;
	ll total = same+diff;
for(int i=3;i<=n;i++)
{
	same = diff;
diff = total*(k-1);
total =same+diff;
	}	
	cout<<total%mod;
}
