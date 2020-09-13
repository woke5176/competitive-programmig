#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>v(n);
vector<int>v1;

for(int i=0;i<n;i++){
	cin>>v[i];
	if(v[i]==1){
		v1.push_back(i);
	}
}	
 if(v1.size()==0)  {
 	cout<<"0"<<endl;
 	return 0;
 }
long long res=1;
for(int i=1;i<v1.size();i++){
	res*=(v1[i]-v[i-1]);
}
cout<<res<<endl;
return 0;
}

