
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        
        string s;
        string s1;
        cin>>s>>s1; 
        
        map<char,int>mp;
        
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int j=0;
        map<char,int>mps;
        while(j<s1.size())
    {
            mps[s1[j]]++;
            j++;
        }
        sort(s.begin(),s.end());
        j=0;
        int count=0;
        string res="";
        bool falg=true;
         for( j=0;j<s.size();j++){
            if(mp[s[j]]> mps[s[j]]){
            	falg=false;
                res+=s[j];
                count++;
                mp[s[j]]--;
            }
            else if(s[j] == s1[0]){
               int count1=1;
               
                for(int i=0;i<s1.size();i++){
                	if(falg==false)
                	count1++;
                	
                   mp[s1[i]]--; 
                }
               res+=s1;
                break;
            }
        }
    
        
	for(int k=0;k<=25;k++){
            int x= mp['a'+k];
            if(x >0)
{
int v1=0;
 for(v1=0;v1<x;v1++)
            {
                    res=res+(char)(k+(int)'a');
                    
                }
            }
           
        }
        cout<<res;
        printf("\n");
    }    
    return 0;
}   
