#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	
scanf("%d",&t);
	while(t--){
	int x,y;
	scanf("%d",&x);
		scanf("%d",&y);
	
		if(2*x<=y){
			printf("%d",x);
			printf(" ");
			printf("%d\n",2*x);
			
			
		}
		else{
			printf("-1");
			printf(" ");
			printf("-1\n");
			
		}

	}
}
