#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int c=0,c1=0;
	for(int i=0;i<n;i++){
		if(s[i]==s[0]){
			c++;
		}
		else break;
		
	}
	for(int i=n-1;i>=0;i--){
		if(s[i]==s[n-1]){
			c1++;
		}
	
	else 
	break;
}
if(s[0]==s[n-1])
{


	cout<<((c+1)*(c1+1))%998244353<<endl;
}


else{
	cout<<(c+c1+1)%998244353<<endl;
}


}
