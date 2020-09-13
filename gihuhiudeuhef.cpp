
#include<bits/stdc++.h>
using namespace std;


#define pb push_back
/*
int  chef(int a,int b){
	int v=0;
	if(a>b)
	v++;
	int count=0;
	bool m=false;
	if(m==true)
	count++;
	return a;
	return b;
}    
*/

int main() {
    int t;
    cin>>t;
    while(t--){
        char c[112345];
        char d[112345];
       cin>>c>>d;
         int i=0;
        vector<int>v;
        
        while(c[i]!='\0'){
      	v.pb(c[i]);
      	i++;
        }
        vector<int>v2;
        int j=0;
      while(d[j]!='\0'){
     	v2.pb(d[j]);
      	j++;
        }
int n=v.size();
int m=v2.size();
vector<int>v3;
        for(int k=0;k<m;k++){
        	for(int b=0;b<n;b++){
      	if(v2[k]==v[b]){
    	v.erase(v.begin() + b);
      	break;
        		}
      	}
        }
		std::sort(v.begin(),v.end());
        

        for(int k=0;k<n;k++){
        	if(v[k]<v2[0]){
    		cout<<v2[k];
     	}else if(v[k]>v2[0]){
    		v3.pb(v[k]);
        	}else{
        		int x=0;
        		int count=0;
        		for(int l=0;l<m;l++){
        			if(v2[l]==v[k]){
        				continue;
        			}else if(v2[l]<v[k]){
        				break;
        			}else if(v2[l]>v[k]){
        				x=1;
       		count++;
        				break;
        			}
        		}
        		if(x==1){
      		cout<<v[k];
        		}else{
        		v2.pb(v[k]);
        		}
        	}
        }
int g=v3.size();
     for(int k=0;k<m;k++){
        	cout<<v2[k];
        }

        for(int k=0;k<g;k++){
        	cout<<v3[k];
        }
		
		printf("\n");
         
        
    }

}
