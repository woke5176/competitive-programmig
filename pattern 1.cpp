
#include<bits/stdc++.h>
using namespace std;


int main()
 {
int i,j,n;
printf("no. of rows\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    if(i%2==0)
    {
        printf("%d",i+1);
    }
    for(j=1;j<=n;j++)
    {
        printf("%d",i);
    }
    if(i%2!=0)
    {
        printf("%d",i+1);
    }
        printf("\n");
    }
    
    return 0;
    
}
