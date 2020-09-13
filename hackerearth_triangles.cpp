#include<bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int traingle_count(int v,int p1,int p2){
	int adj=abs(p1-p2);
    	int dup=v;
	int num;
	int count=1;
	 if(adj==2||adj== v-2)
dup=dup-4;; 
if(adj<2 || adj==v-1)
   dup=dup-3;
    else{
      dup=dup-4;
      count++;
    }
   num=count+dup*(v-5);
   return num;
  }




int main(){
	ios
	int t;
	cin>>t;
	while(t--){
		int vertex;
		int p1;
		int p2;
		cin>>vertex;
		cin>>p1;
		cin>>p2;
	  int count1=traingle_count(vertex, p1, p2);
		cout<<count1<<endl;
	}
}
