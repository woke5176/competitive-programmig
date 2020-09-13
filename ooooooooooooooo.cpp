

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int x;
   	cin>>x;
	while(x) {
        	int v;
        	
	cin>>v;
		bool falg = true;
	
        int kahan=0;
       int res;
		int j=0;
       int l=0;
       int z;
        int h=0;
        for (l= 0; l<v; l++) {
            scanf("%d",&z);
            if (z) {
               kahan= kahan+ z;
            } else {
               int f= z*-1;
                if (f<kahan) {
                   kahan-=f;
                   falg =true;
                   j--;
                } else {
                	h= f- kahan;
                	kahan =0;
                    res+=h; 
                  falg= false;
                  j++;
                }
            }
        }
        printf("%d",res);
        printf("\n");
        x--;
    }
}
