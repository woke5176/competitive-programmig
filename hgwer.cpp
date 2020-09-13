

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
scanf("%d",&t);
	while(t--){
		string s1;
		string s2;
		cin>>s1>>s2;
 int a[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
 int i=0;
 int flag=1;
 int flag1=0;
 int c=0;
 string res="";
	  while(i<s1.size())
    {
      a[(int)s1[i]-97] ++ ;
      i++;
    }
    int j=0;
	  while(j<s2.size())
    {
      a[(int)s2[j]-97] -- ;
      j++;
    }
   int x= s1.size()-s2.size();
	
		for(int k=0; k<s2.size()-1;k++){
			if(s2[k] != s2[k+1]){
				if(s2[k] > s2[k+1])	{
					
				flag=0;
			}	
				break;
			}
		}
		
		
	
		for(int i=0; i<x; i++){
			while(a[c]==0){
				if(c+97== (int)s2[0] && flag1==0){
    				res+=s2;
    			flag1=1;
    			}
				c++;
			}
			if(c+97== (int)s2[0] &&flag==0 && flag1==1){
			
			flag1=0;
			res+=s2;
			}
			res+=(char)(97+c);
			a[c]--;
		}
		if(res.size() < s1.size())
		    res+=s2;
		cout<<res;
		printf("\n");
	}
}
