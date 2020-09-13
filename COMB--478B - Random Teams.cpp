#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll pairs(long long int n)
{
    return n * (n - 1) / 2;
}
int main()
{
    ll n,m;
    cin>>n>>m;
  ll a(n / m), b(n % m);
    ll min = pairs(a) * (m - b) + pairs(a + 1) * b;
    ll max = pairs(n-m+1);
    cout << min << " " << max << endl;
    return 0;
}
