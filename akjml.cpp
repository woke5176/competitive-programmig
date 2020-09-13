#include <bits/stdc++.h> 
using namespace std; 
  

bool find(int a[], int n, int key);
int main() 
{ 
  printf("Enter the size of array\n");
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  printf("Enter the key");
  int key;
  scanf("%d",&key);
    find(a, n, key); 
  
    return 0; 
} 
bool find(int a[], int n, int key) 
{ 
   int curr=0;
    for (int i = 0; i < n - 2; i++) { 
        unordered_set<int> s; 
         curr = key - a[i]; 
        for (int j = i + 1; j < n; j++) { 
            if (s.find(curr - a[j]) != s.end()) { 
                printf("Three elements in array whose sum is equal to given key are %d, %d, %d", a[i], 
                       a[j], curr - a[j]); 
                return true; 
            } 
            s.insert(a[j]); 
        } 
    } 
  
    return false; 
} 
  
