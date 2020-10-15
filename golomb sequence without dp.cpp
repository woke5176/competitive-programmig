#include<bits/stdc++.h>
using namespace std;
int main(){
	long long  n;
	cin>>n;
	long long a[n+1];
	a[1]=1;
	a[2]=2;
a[3]=2;
long long j=4;
for(long long count= 3;count<=n;count++){
	long long x = a[count];
	int i=0;
	while(i<x && j<=n){
	a[j]=count;
	j++;
	i++;	
	}
}
for(int i=1;i<=n;i++){
	cout<<a[i]<<endl;
}
}
