#include<bits/stdc++.h>

using namespace std;
int main()
{
  int t;
  cin>>t;

    while(t--)
    {
        int n;
        cin>>n;   
   int rem=n%4;
   int div=n/4;

    

    for(int i=0; i<n-div-1; i++)
    {
       printf("9");
    }

    if(rem == 0){
	
        printf("9");}
    else
    {
       printf("8");
    }

    for(int i=0; i<div; i++)
    {
       printf("9");
    }

    printf("\n");

    }
    return 0;
}
