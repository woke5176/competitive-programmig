#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
    int	a=0,b=1;
	if(n==1||n==2){
		cout<<n;
	}
	for(int i=3;i<=n;i++){
		cout<<a+b<<" ";
		b=a+b;
		a=b-a;
	}

}
