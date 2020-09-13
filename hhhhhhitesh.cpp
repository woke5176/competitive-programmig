#include<bits/stdc++.h>
using namespace std;

int b_s(string arr[], string x, int n) {
   int lower = 0;
   int upper = n - 1;
   while (lower <= upper) {
      int mid = lower + (upper - lower) / 2;
      int res;
      if (x == (arr[mid]))
         res = 0;
      if (res == 0)
         return mid;
      if (x > (arr[mid]))
         lower = mid + 1;
      else
         upper = mid - 1;
   }
   return -1;
}

int main(){
	int n;
	cin>>n;
string arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
string x="1";	
	cout<<b_s(arr,x,n)<<endl;
}
