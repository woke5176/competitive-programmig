#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//https://www.codechef.com/AUG20B/problems/SKMP

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        string s1;
        cin>>s>>s1;
       vector<int>v(26,0);
       vector<int>v2;

        
        for(int i=0;i<s.size();i++){
        	v[s[i]-'a']++;
		}
      
        while(t_arr[s_index]!='\0'){
        	t.push_back(t_arr[s_index++]);
        }

        for(int i=0;i<t.size();i++){
        	for(int j=0;j<s.size();j++){
        		if(t[i]==s[j]){
        		
        			s.erase(s.begin() + j);
        			break;
        		}
        	}
        }
        sort(s.begin(),s.end());
        std::vector<char> char_v;

        for(int i=0;i<s.size();i++){
        	if(s[i]<t[0]){
        		cout<<s[i];
        	}else if(s[i]>t[0]){
        		char_v.push_back(s[i]);
        	}else{
        		bool flag= false;
        		for(int j=0;j<t.size();j++){
        			if(t[j]==s[i]){
        				continue;
        			}else if(t[j]<s[i]){
        				break;
        			}else if(t[j]>s[i]){
        				flag=true;
        				break;
        			}
        		}
        		if(flag){
        			cout<<s[i];
        		}else{
        			char_v.push_back(s[i]);
        		}
        	}
        }

        for(int i=0;i<t.size();i++){
        	cout<<t[i];
        }

        for(int i=0;i<char_v.size();i++){
        	cout<<char_v[i];
        }
		
		cout<<endl;
       
        
    }
	//code
	return 0;
}
