
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin>>t;
    vector<ll> v;
    v.push_back(0);
    v.push_back(2);
    for(ll i=2;i<=100000;i++)
    {
       ll nc=v[i-1]+(i-1)+2*i;
       v.push_back(nc);
    }
	while(t--)
    {
        ll n;
        cin>>n;
        ll cnt=0;
        while(n>0)
        {
            ll index=lower_bound(v.begin(),v.end(),n)-v.begin();
            if(v[index]==n)
            {cnt++;n=n-v[index];}
            else{
                if(index-1==0)
                    break;
                cnt++;
                n=n-v[index-1];
            }
        }
        cout<<cnt<<"\n";
    }
	return 0;
}
