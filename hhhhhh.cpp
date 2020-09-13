
#include<bits/stdc++.h>
using namespace std;



int main() {
    int t;
   scanf("%d",&t);
    while(t--){
        string s;
        
        string s1;
        cin>>s>>s1;
       vector<int>v1;
       for(int i=0;i<s1.size();i++){
	   v1.push_back(s1[i]);
        }
      vector<int>v;
        for(int i=0;i<s.size();i++){
	   v.push_back(s[i]);
        }
        for(int i=0;i<v1.size();i++){
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
