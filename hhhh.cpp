#include <bits/stdc++.h>
using namespace std;
#define ll long long 




int main(){
ll x;
	scanf("%lld",&x);
	while(x){
	ll v;
		scanf("%lld",&v);
		string str;
		cin>>str;

	string res="";
	int b=v-1;
	char c= str[b];

	for(int j=0;j<v;j++){
	 res+=c;
	} 

	cout<<res;
	printf("\n");
	x--;
}
	
	}


	
