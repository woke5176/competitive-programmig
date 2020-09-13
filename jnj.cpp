#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
   scanf("%d",&t);
    while(t--){
        map<char,int>mp;
        string s1;
		string s2;
        cin>>s1>>s2;
 
        for(int i=0;i<s1.size();i++){
            mp[s1[i]]++;
        }
       map<char,int>mps;
        for(int i=0;i<s2.size();i++){
            mps[s2[i]]++;
        }
        sort(s1.begin(),s1.end());
        string res="";
        int j=0;
        while(j<s1.size()){
 
           if(s1[j] ==s2[0]){
 
                for(int i=0;i<s2.size();i++){
                   mp[s2[i]]--; 
                }
                res+=s2;
                break;
            }
            else if(mp[s1[j]]>mps[s1[j]]){
                res+=s1[j];
                mp[s1[j]]--;
            }
            j++;
        }
        for(int i =0;i<26;i++){
            int v = mp['a'+i];
            if(v>0){
 
 
                for(int k=0;k<v;v++){
                    res+=('a'+i);
                }
            }
        }
 
        cout<<res;
        printf("\n");
    }    
    return 0;
}   
