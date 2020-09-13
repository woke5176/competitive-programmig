#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int arr[30]={0};
		char c;
	for(int i=0;i<k;i++){
	
		cin>>c;
	arr[c-'a']=1;
		}
		ll res=0;
		ll count=0;
	for(int i=0;i<n;i++){
		if(arr[s[i]-'a'])
		count++;
		else{
			res+=(count*(count+1))/2;
			
             count=0;
		}
			}
	if(count)
		res+=(count*(count+1))/2;
	cout<<res<<endl;
}
