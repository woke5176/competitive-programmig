#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {

   

    int t ;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        ll v = 0;
        ll r = 0;
        ll i;
        while(r < n){

            for(i=1;i<n+1;i++){
                cout << (v+i) << " ";
            }
            r++;
            cout << "\n";
            v=v+n;

            if(r == n)
                break;
            for(i=0;i<n;i++){
                cout << (v+ (n-i) ) << " ";
            }
            r++;
            v=v+n;
            cout << "\n";
        }
    }

    return 0;
}

