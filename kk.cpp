
#include<bits/stdc++.h>
using namespace std;

int main() {
	int v;
	scanf("%d",&v);
	while(v--)
	{
	  int a,b;
      scanf("%d",&a);
scanf("%d",&b);      
int v[a];
int x=0;
int ans=0,flag=0;
      while(x<a){
      	cin>>v[x];
      	x++;
	  }
for(int j=0;j<a;j++)
      {
          flag=flag+v[j];
      if(v[j]>flag)
          {
           printf("-1");
           printf("\n");
           return 0;
        }
          else if(flag>b)
          {
             
              ans+=1;
              j=j-1;
              flag=flag-flag;
          }
         else if(flag==b)
          {
           flag=flag-flag;;
           ans+=1;
          }
  }
  bool t=false;
  int count=0;
  
  if(t)
  count++;
      if(flag>0&&flag<=b) {
	  
	  ans+=1; }
      printf("%d",ans);

	}
	return 0;
} 
