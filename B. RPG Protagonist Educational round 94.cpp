    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    int main(){
        int t;
        cin>>t;
        for(int i=1;i<=t;i++){
            ll p,f,cnts,cntw,s,w;
        cin>>p>>f>>cnts>>cntw>>s>>w;
        if(s>w){
            swap(s,w);
            swap(cnts,cntw);
        }
        ll ans=0;
        for(ll i=0;i<=cnts;i++){
            if(i*s>p)
                continue;
            ll sf=i;
            ll ss=min(f/s,cnts-i);
            ll left_f=p-(sf*s);
            ll left_s=f-(ss*s);
            ll wf=min(cntw,left_f/w);
            ll ws=min(left_s/w,cntw-wf);
            ans=max(ans,sf+ss+wf+ws);
        }
        cout<<ans<<"\n";
        }
        return 0;
    }
