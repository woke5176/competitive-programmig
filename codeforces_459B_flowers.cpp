#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>v(n);
    
	int i;
	for(i=0;i<n;i++){
		cin>>v[i];
	}
   int max= *max_element(v.begin(),v.end());
   int min=*min_element(v.begin(),v.end());
   int c1= count(v.begin(),v.end(),max);
   int c2= count(v.begin(),v.end(),min);
   int c3= count(v.begin(),v.end(),v[0]);
   if(c3!=n)
   	cout<<(max-min)<<" "<<c1*c2;
   
   else
   
   cout<<(max-min)<<" "<<n*(n-1)/2;;
}
