#include<bits/stdc++.h>
using namespace std;

int main() 
{ 
    int n; 

    cin>>n; 
    int p=n; 
    if(n>=1 && n<=100) 
    { 
    for(int i=1;i<=n;i+=2) 
    { 
        int k=(i-1)*n+1; 
        for(int j=0;j<n-1;j++) 
        { 
            cout<<k<<" * "; 
            k++; 
        } 
        cout<<k<<" "; 
        cout<<endl; 
    } 
    if(n%2!=0) 
    { 
        p=n-1; 
    } 
    for(int i=p;i>0;i-=2) 
    { 
        int k=(i-1)*n+1; 
        for(int j=0;j<n-1;j++) 
        { 
            cout<<k<<" * "; 
            k++; 
        } 
        cout<<k<<" "; 
        cout<<endl; 
    } 
    } 
    else 
    { 
        cout<<"Enter a Valid Input(1-100)!"; 
    } 
    return 0; 
} 
