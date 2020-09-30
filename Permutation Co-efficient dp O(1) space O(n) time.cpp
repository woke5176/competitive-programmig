#include<bits/stdc++.h>
using namespace std;
int co_eff(int n,int k){
	int p=1;
	for(int i=0;i<k;i++){
	p*=(n-i);
	}
	return p;
}
int main(){
	int n,k;
	cin>>n>>k;
	cout<<co_eff(n,k);
}
