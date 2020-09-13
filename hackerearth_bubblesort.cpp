#include <iostream>
#include <algorithm>
using namespace std;
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
	ios
	int n;
	int i;
	cin>>n;
	int a[n];
	for( i=0;i<n;i++){
		cin>>a[i];
		
	}
	bool flag=true;
	long long count=1;
while(flag!=false){
		count=count+1;;
		flag=false;
	}
	i=0;
for(i=0;i<n-1;i++){

		if(a[i]>a[i+1]){
			swap(a[i],a[i+1]);
			flag=true;
	
		}
	}
	cout<<count<<endl;
}
