// using Sieve of Eratosthenes
#include <bits/stdc++.h> 
using namespace std; 


int sum(int N) 
{ 
	int SumOfPrimeDivisors[N+1] = { 0 }; 

	for (int i = 2; i <= N; ++i) { 

	
		if (!SumOfPrimeDivisors[i]) { 

		
			for (int j = i; j <= N; j += i) { 

				SumOfPrimeDivisors[j] += i; 
			} 
		} 
	} 
	return SumOfPrimeDivisors[N]; 
} 


int main() 
{ 
	int n;
	cin>>n; 
	cout <<sum(n) << endl; 
} 

