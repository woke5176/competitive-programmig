#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   int x;
   	scanf("%d",&x);
	while (x) {
		int v;
		scanf("%d",&v);
		int b[v];
		int a=0;
		int count=1;
		int y=0;
		int i=0;
    while(i<v){
	cin>>b[i];
	i++;
}
	
		while (a< count &&  count < v) {
			int flag =0;
			while (b[a] && b[count]<0) {
			flag=1;
			int l= min(b[a],-b[count]);
			y=1;
			y++;
				
				b[a] -= l; 
				b[count]= b[count] + l ;
			}
			if (flag==0) {
				y++;
				y=1;
				a=a+1 ; 
				count = count+1;
			} else {
				if (b[count] == 0) {
					count= count + 1 ;
				} else {
				y++;
				y=1;
				a++;
				}
			}

		}
		int flag = false;
		sort(a,a+v);
		int g= b[v-1];
		printf("%d",g);
		printf("\n");
		x--;	}
	
}
