#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		char s111[130000];
        char s111111[13000];
		string s;
		string s1;
		cin>>s>>s1;
		
		int l[26]={  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		int n=s.size();
		int m=s1.size();
		int i=0;
		int flag=0;
		while(i<n){
			l[(int)(s[i]-97)]++;
		}
		for(char j : s1)
			l[(int)(j-'a')]--;
int g=0;
	int flag1 = 0;	
		for(int k=0; i<m-1;i++){
			if(s1[k] != s1[k+1]){
				if(s1[i]>s1[i+1])
					flag=1;
				break;
			}
		}
		bool flag2=false;
		string str="";
		int v=n-m;
		for(int k=0; k<v; k++){
			while(l[g]==0){
				if(g+97==(int)s1[0] &&flag1==0){
    				str+=s1;
    				flag1=1;
    			}
    			flag2=false;
				g++;
			}
			if(g+97 == (int)s1[0] && flag==1 && flag1==0){
				
				flag1=1;
				str+=s1;
			}
			str+=(char)(97+g);
			l[g]--;
		}
		int p=str.size();
		if(p <n)
		    str+=s1;
		cout<<str;
		printf("\n");
	}
}
