#include<bits/stdc++.h>
using namespace std;
#define comp INT_MIN

int main(){
   
    int x;
   scanf("%d",&x);
    while(x){
       int n;
       int res=0;
       scanf("%d",&n);
       int s[n];
       vector<int>b;
       for(int i=0;i<n;i++){
       	cin>>s[i];
    
	   }
	sort(s,s+n);
   bool flag = false;
       int count =  0;
       int c=0;
	int l=5-1;
	int k=0;
	for(int i=1;i<=l;i++) {
			long long counter=1;
			bool bt= true;
		for( k=0;k<i;i++) {
			flag= false;
			count++;
			counter*=s[k];
			}
			bt=false;
			c++;
			counter--;
			long long h=l+1-i;
			for(k=n-h;k<=n-1;k++){
				flag= false;
			count++;
			c--;
			counter=counter*s[k];	
			}
			long long z=comp;
			flag=true;
			count++;
			c--;
			z=max(z,counter);
		//if(comp>counter)
//		comp=z;
//		else
//		comp=counter;
//		}
	cout<<comp;
	printf("\n");
	}
	return 0;
}
}
