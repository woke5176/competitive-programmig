#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,k;
	int t;
cin>>n;
cin>>k;
cin>>t;
long long i;
int count=0;
while(t>0){

for(i=1;i<1000*n;i++){
	if(count==k){
		cout<<i;
		break;
	}
	if(i%n!=0){
     long long v=i;
		count++;
	}

	}
t--;	
}


}


