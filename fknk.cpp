#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		string s;
		string s2;
		cin>>s>>s2;
		map<char,int>mp;
		// map insertion of string 1
		for(int i=0;i<s.size();i++){
			mp[s[i]]++;
		}
		map<char,int>mps;
			// map insertion of stering 2
	for(int i=0;i<s2.size();i++){
			mps[s2[i]]++;
		}	
		// removing amount of characyers which are already on string 1 and 2 i.e commmon ones to resolve further conflict
		for(auto it=mps.begin();it!=mps.end();it++)
        {
            mp[it->first]-=mps[it->first];
 
        } 
	//if first elwment of string 2 is a then print all a comming in s1 ans s2 though this line is trivial . but you know i am dumb so did it anyways

 
		
		// printing the map of string 1 until i find the first character of string 2
		
		
        
		 // found  first character of s2 so printed entire s2     
         cout<<s2;
 char i='a';
 //printing left out element after s2 in map of string 1
    while(i!='z'+1)
         {
             while(mp[i]>0)
             {
                 cout<<i;
                 mp[i]--;
             }
             i++;
         }        
       printf("\n");
    }
    return 0;
} 
    
 


