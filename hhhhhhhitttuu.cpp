#include<bits/stdc++.h>
using namespace std;
void merge(int ar1[], int ar2[], int m, int n) 
{ 
   
    for (int i=n-1; i>=0; i--) 
    { 
       
        int j, last = ar1[m-1]; 
        for (j=m-2; j >= 0 && ar1[j] > ar2[i]; j--) 
            ar1[j+1] = ar1[j]; 
  
       
        if (j != m-2 || last > ar2[i]) 
        { 
            ar1[j+1] = ar2[i]; 
            ar2[i] = last; 
        } 
    } 
} 
int main(){
	int n,m;
	cin>>n>>m;
	
	int ar1[n];
	for(int i=0;i<n;i++)
	cin>>ar1[i];
	int ar2[m];
	for(int i=0;i<m;i++)
	cin>>ar2[i];
reverse(b, b+ n); 
 merge(ar1, ar2, n, m); 	
 for (int i=0; i<m; i++) 
        cout << ar1[i] << " "; 
    
    for (int i=0; i<n; i++) 
        cout << ar2[i] << " "; 	
}
