#include<bits/stdc++.h>
using namespace std;

int main() {
	int v;
cin>>v;
	while(v--)
	{
	  int a,b;
      scanf("%d",&a);
scanf("%d",&b);
vector<int>v(a);  
for(int i=0;i<a;i++){
	cin>>v[i];
}    
int m=0;
    int mx=*max_element(v.begin(),v.end());
    int k=0;
if(mx>b){
	cout<<-1<<endl;
	return 0;
}

    else{
    	int g=0;
    	
    for(int i=0;i<a-1;i++){
    g=v[i+1]+v[i];
	if(g<=b)
	 v[i+1] =g;
	 	
	
	else
		k++;
		
	}	
	}
cout<<k+1<<endl;
}
}
