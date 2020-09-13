#include<bits/stdc++.h>
using namespace std;
#define ll long long
	int odd(int end, int begin){ 
    int c = (end - begin)/2;
    if (end%2!=0||begin%2!=0)  
        c++; 
    return c; }
int main(){

	int x;
	int y;
	cin>>x>>y;
	int k;
	cin>>k;
	int o=odd(y,x);
	int e=(y-x+1) -o;
	ll sum=0;
	

  
	if(k%2==0){
		// case1: Taking all odd
	
		sum+=pow(o,k);
			// case2: Taking all even
		sum+=pow(e,k);
		
		// Case:3 Even odd bag
		for(int i=1;i<k/2;i++){
			sum+=pow(o,k-2*i)*pow(e,2*i);
		}
		cout<<sum;
	}
	else{
		
			sum+=pow(o,k)*e;
			// case2: Taking all even
		sum+=pow(e,k);
		
		// Case:3 Even odd bag
		ll res=0;
		for(int i=1;i<k/2;i++){
			res+=pow(o,k-2*i)*pow(o,2*i);
		}
		sum+=res*e;
		cout<<sum;
	}
		
	}
	

