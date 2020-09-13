#include <bits/stdc++.h>
using namespace std;


 
 int main(){
 int n,i,a,b,p,ans;
    string str;

    while (cin >> n)
    {
        map <char,int> mp;
        map <char,int> :: iterator it;
        ans = 0;

        while (n--)
        {
            cin >> str;
            ++mp[str[0]];
        }

        for (it=mp.begin(); it!=mp.end(); it++)
        {
            p = it->second;

            if (p & 1)
            {
                a = p/2;
                b = p-a;
                ans += (a*(a-1)+b*(b-1))/2;
            }
            else
            {
                a = p/2;
                
                ans += a*(a-1);
            }
        }

        printf("%d\n",ans);

        mp.clear();
    }

    return 0;
}
