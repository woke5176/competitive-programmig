#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,j,sum,count,till;
    while(cin>>n){
        long long arr[n];
        sum=0;
        for(i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        sum=sum/2;
        sort(arr,arr+n);
        count=0;
        till=0;
        for(i=n-1;i>=0;i--){
            till+=arr[i];
            count++;
            if(till>sum)
                break;
        }
        cout<<count<<endl;
    }
    return 0;
}
