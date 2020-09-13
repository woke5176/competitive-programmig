#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int x;
   	scanf("%d",&x);
	while (x) {
        	int v;
        	int tres=0;
        	int kahan=0;
        	int res=0;
		scanf("%d",&v);
		bool falg = true;
		int j=v;
       int i=0;
       int z;
       int l=0;
       while(i<v){
          scanf("%d",&z);
            if (z) {
                kahan = kahan + z;
            } else if(z<0) {
                l= -1 * z;
                if (l<kahan) {
                    kahan-= l;
                    falg= false;
                    j++;
                } else {
                
                	int k= l-kahan;
                	res+=k;
                    kahan=0;
                }
            }
        }
       cout<<res;
       printf("\n");
    }
    
}
