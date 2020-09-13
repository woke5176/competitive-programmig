#include<bits/stdc++.h>
using namespace std;

 
 int main(){
 	int t;
 	cin>>t;
	 long long x=0;
 	vector<int>v(26,0);
 	while(t--){
string s1;
cin>>s1;
v[s1[0]-97]++;}

for(int i=0;i<v.size();i++){
	if(v[i]>0&&v[i]!=1){
x+=(v[i]*(v[i]-1))/2;
	}
	else if(v[i]==1)
	count++;
	else continue;
}
if(count>0){
	x=x+1;
}
cout<<x<<endl;}
