#include<bits/stdc++.h>
using namespace std;

void findPair(int arr[], int n, int sum)
{
	
	sort(arr, arr + n);

	
	int low = 0;
	int high = n - 1;

	while (low < high)
	{
		
		if (arr[low] + arr[high] == sum)
		{
		cout << "Pair found";
			return;
		}

		
		(arr[low] + arr[high] < sum)? low++: high--;
	}


cout << "Pair not found";
}


int main()
{
	
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];

	findPair(arr, n, sum);

	return 0;
}
