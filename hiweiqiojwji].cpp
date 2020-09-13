#include <bits/stdc++.h> 
using namespace std; 
#define priority_queue<int> t
#define max 100000
int main() 
{ 
    vector<int>v(max,0);
    for(int i=0;i<v.size();i++){
    	cin>>v[i];
	}
	int x,maxres;
	cin>>x;
	t h;
	for (int a= 0; a< v.size();a++) 
        h.push(v[a]); 
  for(int i=0;i<x;i++){
  	if(h.top()==0)
{
	break;
}
int t=h.top();
h.pop();
 maxres+=t;
 int z=t-1;
 h.push(z); 
  }
    cout<<maxres;
  
} 
