#include<bits/stdc++.h>
using namespace std;
int main(){
	double t;
	cin>>t;
	double d=0;
	for(double i=0;i<t;i++){
		d+=1/(t-i);
	}
	cout<<fixed<<setprecision(12)<<d<<endl;
}
