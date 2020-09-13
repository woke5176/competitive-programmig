#include<bits/stdc++.h>
using namespace std;

int main(){
   
    int x;
   scanf("%d",&x);
    while(x){
       int n;
       int res=0;
       scanf("%d",&n);
       vector<int>s(n);
       vector<int>b;
       for(int i=0;i<n;i++){
       	cin>>s[i];
       	b[s[i]]++;
	   }
       bool flag = false;
       int count =  0;
       int c=0;
        for(int i=0; i<n; i++){
            if(b[i]>0 && b[i]==1){
            	if(flag)
            	count++;
                if(res==0){
                    flag=false;
                    count-=1;
                    res=res+i;
                }
                else{
                	if(!flag)
                	count++;
                    res=res+i;
                    break;
                }
            }
            else if( b[i]==0||c==0){
                if(res<1 || res==0){
                    flag=false;
                    count++;
					res=res+2*i;
                }
                else{
                	flag=true;
                	count--;
                   res=res+i;
                }
                break;
            }
        }
        printf("%d",&res);
        printf("\n");
    }
    return 0;
} 
