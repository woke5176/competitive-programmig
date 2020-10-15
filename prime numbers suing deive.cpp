#include<bits/stdc++.h>

/*
using  Sieve of Eratosthenes
*/

using namespace std;
int main() {
    unsigned long long int i,j,n,z=1;
    printf("Enter the limit : ");
    scanf("%llu",&n);
    vector<int>primes(n);

    fill(primes.begin(),primes.end(),1);

    for(i=2; i<n; i++)
        if(primes[i])
            for(j=i; i*j<n; j++)
                primes[i*j]=0;

    for(i=2;i<n;i++)
    if(primes[i])
        printf("%lluth prime = %llu\n",z++,i);

        return 0;

    }
