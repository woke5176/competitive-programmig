#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){
	
	ll a,b;
	cin>>a>>b;
	ll c,d;
	cin>>c>>d;
	ll e,f;
	cin>>e>>f;
	if(e>f){
		swap(e,f);
	swap(c,d);
	}
	ll res=0;
	ll fi=0;
	ll sec=0;
	
	for(ll i=0;i<c;i++){
	if(a>c*i){
		break;
	}	
	fi =i;
	ll v=c-i;
	sec=min(b/e,v);
	 ll left_f=a-(fi*e);
    ll left_s=b-(sec*f);
    ll wf=min(d,left_f/f);
    ll ws=min(left_s/f,d-wf);
    res=max(res,fi+sec+wf+ws);
	}
	cout<<res<<endl;
}
}
