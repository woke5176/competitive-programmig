#include<bits/stdc++.h>
using namespace std;

void solve(int n){
	int t=0,s=0,f=0;
		if(n==1||n==2||n==4){
			cout<<-1;
			return ;
		}
		if(n%3==0){
		t=n/3;
		}
		else if(n%3==1){
		t=(n-7)/3;
		s=1;	
		}
		else if(n%3==2){
			f=1;
			t=(n-5)/3;
		}
		cout<<t<<" "<<f<<" "<<s;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
	solve(n);
	cout<<endl;
	}
}
