#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
	cin>>s;
	int res=0;
	res+=((1<<s.size())-2);

	for(int i=s.size()-1,count=0;i>=0;i--,count++){
		if(s[i]=='7'){
			res+=(1<<count);
		}
	}
	cout<<res+1<<endl;
}
