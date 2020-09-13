#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
    cin >> t;
    while (t--) {
    	int n;
        cin >> n;
        vector < int > v(n);
        int a, b, c = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        a = v[0], b = v[1], c = v[n - 1];
        if (a + b > c) cout << -1 << endl;
        else cout << 1 << " " << 2 << " " << n << endl;
    }
    return 0;
}

