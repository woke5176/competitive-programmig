
#include<bits/stdc++.h>
using namespace std;
int main() {
 int x;
 scanf("%d",&x);
 while(x) {
 	int v;
 	scanf("%d",&v);
 	int b[v];
 	int i=0;
while(i<v){
	cin>>b[i];
	i++;
}
 	i= v-1;
 	bool flag = true;
 	if(v>0)
 	flag= false;
 	for(int i=v-1;i>=0;i--){
 		printf("%d",b[i]);
	 }
	 x--;
 }
return 0;
}
