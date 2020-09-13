#include<bits/stdc++.h>
using namespace std;
int main(){


int t;
cin>>t;
while(t--){

int n;
cin>>n;
    if(n<=30){
	
        printf("NO\n");
		}
    else  if(n == 36){
	
        printf("YES\n");
        printf("6 10 15 5\n");}
    else if(n == 40){
	
       printf("YES\n");
        printf("10 14 15 1\n");}
    else if(n == 44){
	
        printf("YES\n");
        printf("10 14 15 5\n");}
    else{
	
        printf("YES\n");
        printf("6 10 14 %d\n", n-30);}
    }
    }
