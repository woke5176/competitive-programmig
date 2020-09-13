#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    ll n,m,count,i;
   cin>>n>>m;
    ll a[m];
    for(i=0; i<m; i++)
    {
       cin>>a[i];
    }
    count=a[0]-1;
    for(i=0; i<m-1; i++)
    {
        if(a[i]>a[i+1])
        {
            count+=a[i+1]+n-a[i];
        }
        else
            count+=a[i+1]-a[i];
    }
    cout<<count<<endl;
    return 0;
}
