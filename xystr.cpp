#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll n=s.length();
        int d=0;
        int i=0;
        while(i<n-1){
            if(s[i]!=s[i+1]){
                d++;
                i+=2;
            }
            else
            i++;
        }
        cout<<d<<endl;
    }
}
