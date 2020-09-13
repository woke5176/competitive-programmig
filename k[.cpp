// C++ program to find common elements 
// between two Vectors using STL 

#include <bits/stdc++.h> 
using namespace std; 
#define ll long long

int main() 
{ 

	int t;
	cin>>t;
	while(t--){
	ll n,m;
	cin>>n>>m;
	vector<int>v(n)  ;
	vector<int> x(m);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
		for(int i=0;i<m;i++){
		cin>>x[i];
	}

	// Sort the vector 
	sort(v.begin(), v.end()); 
	sort(x.begin(), x.end()); 

	vector<int> v1(vector1.size() + vector2.size()); 
	vector<int>::iterator it, st; 

	it = set_intersection(v.begin(), 
						ve.end(), 
					x.begin(), 
					x.end(), 
						v1.begin()); 


	for (st = v.begin(); st != it; ++st) {
	
	    cout<<1;
		cout << *st << endl
		break;}
	

	return 0; 
} 

