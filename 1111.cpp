#include<bits/stdc++.h>
using namespace std;
#define ll long long
	int factorial(int n) 
{ 
    
    return (n==1 || n==0) ? 1: n * factorial(n - 1);  
} 
int main(){
	ll n;
	cin>>n;
	ll x;
	cin>>x;
	double sum=1;
	ll i;

	for(i=2;i<=n;i++){
			ll k=factorial(n);
		if(i%2==0){
		
			sum+=pow(x,n)/k;
		}
		else
		sum-=pow(x,n)/k;
		
		
	}
	cout<<sum;
	}
