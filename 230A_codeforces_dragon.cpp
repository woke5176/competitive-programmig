#include<bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
	ios
	int s,n;
	cin>>s>>n;
		int a,b;
	vector <pair <int, int> > v;
	for(int i=0;i<n;i++){
	cin>>a>>b;
    v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end());
	int j;
	for (j = 0; j < n; j++) {
        if(s <= v[j].first){
            cout << "NO"<<endl;
            return 0;
        } else {
            s += v[j].second;
        }
    }
    cout << "YES" << endl;
}
	
