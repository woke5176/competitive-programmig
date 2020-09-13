#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,s1;
cout<<"Enter a password"<<endl;
cin>>s;
int flag=1;
for(int i=0;i<s.size();i++){
	if(s[i]!='@'&&s[i]!='#'){
	flag=0;
	continue;
	}
	else 
	flag=1;	
}
if(flag==1){
	cout<<"Renter Your Password"<<"\n";
	cin>>s1;
	
	if(s1==s)
   cout<<"Thank you"<<endl;
   else 
   cout<<"Password doesn't match"<<endl;
}
   

else 

cout<<"INVALID FORMAT"<<endl;
	
}
