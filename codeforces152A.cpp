#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int n,m,i,j;
    char top;
    cin>>n>>m;
    vector<bool>success(n,false);
    vector<string>s(n);
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    for(i=0;i<m;i++){
            top='0';
            for(j=0;j<n;j++){
                if(top<s[j][i]) top=s[j][i];
            }
             for(j=0;j<n;j++){
                if(top==s[j][i]){
                success[j]=true;
                }
            }
    }
    cout<<count(success.begin(),success.end(),true);
    return 0;
}
