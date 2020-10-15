#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
cin>>t;
	while(t--){
		int n;
		cin>>n;
		double a[n];
		for(int i=0;i<n;i++){
			a[i]=i+1;		}
			cout<<2<<endl;
			int i=n-1;
			int j=n-2;
			while(i>=0 && j>=0){
				cout<<a[j]<<" ";
		cout<<a[i]<<endl;
			a[j]= ceil((a[j]+a[i])/2);
			j--;
			i--;
			}
		}
	}
			
			
