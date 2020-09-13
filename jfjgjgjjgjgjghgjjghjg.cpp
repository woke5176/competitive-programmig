#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll x;
	cin>>x;
	while(x){
		ll v;
		cin>>v;
		ll z;
		ll kahan=0;
		ll res=0;
		for(int i=0;i<v;i++){
			cin>>z;
			if(z>0){
				kahan= kahan+z;
			}
			else if(z<0){
				z = z * -1;
				if(kahan>z){
					kahan-=z;
				}
				else {
					ll c = z- kahan;
					kahan =0;
					res= res+c;
				}
			}
		}
		cout<<res;
		printf("\n");
		x--;
	}
}
