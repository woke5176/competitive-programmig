
#include<bits/stdc++.h>
using namespace std;
int main() {
  int t;
  scanf("%d",&t);
    while (t--) {
    	vector<int>x;
    	string str;
        cin >>str;
       int j=0;
       int v=0;
       bool flag=true;
       if(str[0]=='1')
       flag=false;
       int count=0;
       if(str[0]=='1')
       count++;
       int z=0;
      
	   while(j<str.length()) {
            if (str[j] != '1') {
            if (v>0) {
                    x.push_back(v);
                }
				v= 0;
                } 
				else{
			v=v+1;
            }
            
            j++;
        }
        if (v>0){
		
		 x.push_back(v);}
		 int l=0;
		 int s=x.size();
		 
		 vector<int>h(4,0);
		for(int i=0;i<=3;i++){
			h.push_back(i);
		}	 
        sort(x.begin(), x.end());
       
       
    int q=0;
    int k=s-1;
        while(k>=0) {
          q+=x[k]; 
		  k=k-2; 
        }
        printf("%d",q);
        printf("\n");
    }
    return 0;
}
