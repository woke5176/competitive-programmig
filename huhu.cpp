#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 5010
#define inf 1e9

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int, int>

using namespace std;
int main(){
	   int t;
   scanf("%d",&t);
    while(t>0){
        
        
       string s;
       string s1;
       cin>>s;
       cin>>s1;
      
        vector<char>v1;
vector<char>v3;    
        for(int i=0;i<s.size();i++)
        v1.pb(s[i]);
          vector<char>v2;
        for(int i=0;i<s.size();i++)
        v2.pb(s1[i]);

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
if(s[i]=='a')
flak=false;
int n=v2.size();
int m=v1.size();
       for(int i=0;i<m;i++){
            if(v1[i]>v2[0]){
        	v3.pb(v1[i]);}
        else if(v1[i]<v2[0]){
        		cout<<v1[i];
        	}
        	else{
        		bool h= true;
        		for(int k=0;k<n;k++){
        		    if(v2[k]<v1[i]){
        				break;}
        	   else	if(v2[k]==v1[i]){
        				continue;
        			
        			 if(v2[k]>v1[i]){
        				h=false;
        				break;
        			}
        		}
        		if(!h){
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

	return 0;
}

