#include <bits/stdc++.h> 
using namespace std;  
int main() 
{ 
    string A;
    cin>>A;
    string s1="",s2="";
    int n=A.size();
  for(int a=0;a<n;a++){
  	if((int)A[a]>47 && (int)A[a]<=57){
s1+=A[a]; 
	  }
  	 else if(s1.size()) { 
  	 int x=0;
    for (int a= 0;a<s1.size();a++) {
        x=(x*10+(int)s1[a]-48)%26; }
          s2+=97+x;
   s1="";
        } 
  }  
   if (s1.size()) { 
        int x=0;
    for (int a= 0;a<s1.size();a++) {
        x=(x*10+(int)s1[a]-48)%26; }
          s2+='a'+x;                 
    } 
  
    cout <<s2;
  
    return 0; 
} 
