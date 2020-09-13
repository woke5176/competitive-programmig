#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int a[n];
unordered_map<int,int>freq;
	for(int i=0;i<n;i++){
		cin>>a[i];
		freq[a[i]]++;
	}
	int max=*max_element(freq.begin(),freq.end);
	for(auto x:freq){
		
		if(x.second>1)
		cout<<x.first<<"is duplicate with frequency"<<x.second<<endl;
		
	}
	if(freq.find[max]!=freq.end)
	cout<<freq.first<<"is maximum"<<endl;
}
