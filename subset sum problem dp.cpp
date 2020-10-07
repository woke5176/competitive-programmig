#include<bits/stdc++.h>
using namespace std;
bool finder(int n,int set[],int sum){
	bool subset[n + 1][sum + 1]; 
  
    // If sum is 0, then answer is true 
    for (int i = 0; i <= n; i++) 
        subset[i][0] = true; 
  
    // If sum is not 0 and set is empty, 
    // then answer is false 
    for (int i = 1; i <= sum; i++) 
        subset[0][i] = false; 
  
    // Fill the subset table in botton up manner 
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= sum; j++) { 
            if (j < set[i - 1]) 
                subset[i][j] = subset[i - 1][j]; 
            if (j >= set[i - 1]) 
                subset[i][j] = subset[i - 1][j] 
                               || subset[i - 1][j - set[i - 1]]; 
        } 
    } 
  
}
int main(){
	int n;
	cin>>n;
	
	int set[n];
	for(int i=0;i<n;i++){
		cin>>set[i];
	}
	int sum;
	cin>>sum;
    if(	finder(n,set,sum)){
    	cout<<"TRUE";
	}
	else if(!finder(n,set,sum))
	cout<<"FALSE";
}

