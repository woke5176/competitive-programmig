#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
       string s;
        string s2;
        cin>>s>>s2;
        map<char,int> mp;   
        for(int i=0;i<s.size();i++){
			mp[s[i]]++;
		}
		map<char,int>mps;
	for(int i=0;i<s2.size();i++){
			mps[s2[i]]++;
		}	
		for(auto x:mps){
			mp[x.first]-=mps[x.first];
		}
    
      for(auto x:mps)
        {
            mp[x.first]-=mps[x.first];
 
        } 
        	int count=0;
	for(int j=0;j<s2.size();j++){
		if(s2[j]=='a')
		count++;
	}
    bool flag=false;
		if(s2[0]=='a'){
		flag=true;	
		}
		if(flag==true){
			while(mp['a']>0){
				printf("a");
				mp['a']--;
			}
	}
	char temp;
         for(char i='a';i!=s2[0];i++)
         {
			 while( mp[i]>0)
             {
                 cout<<i;
                 temp=i;
                mp[i]--;
             }
         } 
		   
		 while()    
         cout<<s2;
 
    for(char i='a';i!='z'+1;i++)
         {
             while(mp[i]>0)
             {
                 cout<<i;
                 mp[i]--;
             }
         }        
        
 
      printf("\n");
    }
    return 0;
} 
