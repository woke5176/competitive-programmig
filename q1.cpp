#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string b;
    string g;
    cin>>b>>g;
 int max=n;
    vector<char>br(n);
    vector<char>gr(n);
    int i=0;
    int f=n;
    for(i=0;i<n;i++){
    	br.push_back(b[i]);
	}
	  for(i=0;i<n;i++){
    	gr.push_back(g[i]);
	}
	i=0;
    while(i<n) {
        if(br[i]==gr[0]) {
            gr.erase(gr.begin());
           
            max--;
            f=gr.size();
            i++;
        } else {
           int grcopy=gr[0];
           gr.erase(gr.begin());
           gr.push_back(grcopy);
            if(f--==0) {
               printf("%d",max);
               printf("\n");
                return 0;
            }
        }
    }
   printf("%d",max);
   printf("\n");
   return 0;
} 
