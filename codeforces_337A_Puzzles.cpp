#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int>a;
	n=a.size();
	int i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int least = a[n-1] - a[0];
    for ( i = 1; i <= m - n; ++i)
    {
        if (a[i+n-1] - a[i] < least)
        {
            least = a[i+n-1] - a[i];
        }
    }
    cout << least << endl;
    return 0;
}

