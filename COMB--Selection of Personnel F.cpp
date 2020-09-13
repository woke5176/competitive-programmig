#include<iostream>
using namespace std;
int main()
{
long long int N,i,j,l;
cin>>N;
i=N*(N-1)*(N-2)*(N-3)*(N-4)/120;
j=i*(N-5)/6;
l=j*(N-6)/7;
cout<<i+l+j<<endl;
}
