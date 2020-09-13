#include <bits/stdc++.h>
using namespace std;
void chefyn(long long a[],long long n){
	long long f=0,t=0,fif=0,flag=0;
	if(a[0]!=5){
		cout<<"NO"<<endl;
		return;
	}
	for(long long i=0;i<n;i++){
		if(a[i] == 5){
			f++;
		}
		else if(a[i] == 10){
			if(f < 1){
                flag = 1;
				break;
			}
				f--;
				t++;
		}
		else if(a[i] == 15){
			if(t < 1 && f<2){
				flag =1;
				break;
			}
			else{
			if(t>0){
			    fif++;
				t--;
			}
			else if(f>=2){
			    fif++;
				f=f-2;
			}
			}
		}
		
	}
	if(flag == 1)
	cout<<"NO"<<endl;
	else
	cout<<"YES"<<endl;
}
int main()
{
	long long t;
	cin>>t;
	while(t>0){
        long long n;
        cin>>n;
        long long arr[n];
        for(long long i=0;i<n;i++)
        cin>>arr[i]; 
		chefyn(arr,n);
		t--;
	}
	return 0;
}
