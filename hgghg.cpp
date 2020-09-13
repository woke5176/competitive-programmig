#include<bits/stdc++.h>



#define pb push_back
#define pp pair<int, int>

using namespace std;
int main(){
	   int t;
 cin>>t;
    while(t>0){
        
       
        char s[130000];
        char s1[130000];
       
       cin>>s;
       cin>>s1;
      
        vector<char>v1;
          vector<char>v2;
vector<char>v3; 
int l=0;   
      
        while(s[l]!='\0'){
        	v1.pb(s1[l]);
        	l++;
        }
        int l1=0;
        while(s1[l1]!='\0'){
        	v2.pb(v2[l1]);
        	l1++;
        }

        int i;

        for(i=0;i<v2.size();i++){
        	for(int j=0;j<v1.size();j++){
        		if(v2[i]==v1[j]){	
      	v1.erase(v1.begin() + j);
      	break;
     }
        	}
        }
        std::sort(v1.begin(),v1.end());
       string str="";
int g=0;
bool flak =true;
if(g==0)
flak=false;
int count1=0;
int n=v2.size();
int m=v1.size();
 for(int i=0;i<m;i++){
    	if(v2[0]>v1[i]){
     	cout<<v1[i];
     	}else if(v2[0]>v1[i]){
      v3.pb(v1[i]);
        	}else{
      	bool h= false;
        		for(int k=0;k<n;k++){
       	if(v2[k]==v1[i]){
       		continue;
      	}else if(v2[k]<v1[i]){
      		break;
       	}else if(v2[k]>v1[i]){
        	h=true;
       	break;
       	}
        		}
      	if(h){
      		cout<<v1[i];
      	}else{
       	v3.pb(v1[i]);
        		}
        	}
        }

      for(int i=0;i<v2.size();i++){
        	cout<<v2[i];
        }
for(int i=0;i<v3.size();i++){
        	cout<<v3[i];
        }
      
		
	printf("\n");
       
    t--;    
    }

	}

