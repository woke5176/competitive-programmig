#include<bits/stdc++.h>
using namespace std;
int main()
{

int t;
cin>>t;
int v=0;
if(t<3)
cout<<0;
else{

if(t%2){
	int x= t/2;
	v= 2*(x-2)+1;
}

else
{
	v = 2*(t/2-2)-1;
}
}
cout<<v;
}
