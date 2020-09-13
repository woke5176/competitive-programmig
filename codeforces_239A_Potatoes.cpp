#include<bits/stdc++.h>
using namespace std;
int main()
{ 
 int y,k,n;
    cin >> y >> k >> n;
    if( ( ( y / k ) + 1 ) * k > n )
    {
        cout << -1;
        return 0;
    }
    for( int i = ( ( y / k ) + 1 ) * k; i <= n; i += k )
        cout << i - y << " ";
 
}
 
 
 
 
