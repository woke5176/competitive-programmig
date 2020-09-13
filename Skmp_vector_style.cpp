#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	while(t--){
		string s;
		string s1;
		cin>>s>>s1;
		vector<int>v;
		for(int i=0;i<s.size();i++){
			v[s[i]-'a']++;
		}
		for(int i=0;i<s.size();i++){
			v[s1[i]]--;
		}
		sort(s.begin(), s.end()); 
		int temp=(int)s1[0];
		for(int i='a';i<s.size();i++){
			if(i=temp)
		}
		
	}
}
