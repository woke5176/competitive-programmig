#include<bits/stdc++.h>
using namespace std;


int main()
{

long long n,k,i,x,y;
long long ans=1;
cin>>n>>k;

if(k>=2)
{
  x=n*(n-1); y=x/2; ans=ans+y; 
}

if(k>=3)
{
  x=x*(n-2); y=x/6; y=y*2; ans=ans+y;
 
}

if(k>=4)
{
 x=x*(n-3); y=x/24; y=y*9; ans=ans+y;
}

cout<<ans<<endl;

return 0;
}

