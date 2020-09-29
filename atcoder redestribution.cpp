#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
const ll MOD{1000000007};
 
ll solve(ll S) {
    if (S < 3) {
        return 0LL;
    }
 
    vector<ll> A(S+1, 1);
    A[0] = A[1] = A[2] = 0;
    for (ll i{3}; i <= S; ++i) {
        for (ll k{3}; i - k >= 0; k++) {
            A[i] = A[i-k] + A[i] % MOD;
        }
    }
    return A[S];
}
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll S;
    cin >> S;
    cout << solve(S) << endl;
    return EXIT_SUCCESS;
}
