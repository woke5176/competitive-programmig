
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,s=3;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=i;k++)
        {
            printf("%d",s);
        }
        s++;
        printf("\n");
    }
    s--;
    for(i=n;i>=1;i--)
    {
        for(k=1;k<=i;k++)
        {
            printf("%d",s);
        }
        s--;
        printf("\n");
    }
    return 0;
}
