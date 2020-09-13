#include<stdlib.h>
#include<stdio.h>
#define ll long long int
void b_search(ll l,ll r,ll v){
    ll flag=0;
    ll m;
    char c;
    while(l!=r){
        if(flag%2==v){
            m=(l+r+1)/2;
            printf("%lld\n",m);
            fflush(stdout);
            scanf("%s" ,&c);
            if(c=='E')
            _Exit(0);
            else if(c=='G')
            l=m+1;
            else 
            r=m-1;
            flag++;
        }
        else {
            printf("%lld\n",m);;
            fflush(stdout);
           scanf("%s",&c);
            if(c=='E')
            _Exit(0);
            flag++;
        }
            
        }
    }

int main(){
    ll n;
    scanf("%lld",&n);
    ll l=1;
    ll r=n;
   printf("%lld\n",n);
    fflush(stdout);
    char c;
    scanf("%s",&c);
    if(c=='E')
    _Exit(0);
    else if(c=='G')
    b_search(l,r,0);
    else
    b_search(l,r,1);
}
