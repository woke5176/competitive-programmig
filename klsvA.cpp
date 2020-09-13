
#include <bits/stdc++.h> 
using namespace std; 
#define min INT_MIN


void secondlargest(int a[], int k) 
{ 
	 int first_l, second_l; 

	
	if (k < 2) 
	{ 
		cout << "Not possible "; 
		return; 
	} 

	first_l = second_l = min; 
	for(int i = 0; i <k; i++) 
	{ 
		
	
	if (a[i] > first_l) 
	{ 
		second_l = first_l; 
		first_l = a[i]; 
	} 
		
	
	else if (a[i] > second_l && 
				a[i] != first_l) 
	{ 
		second_l = a[i]; 
	} 
	} 
	if (second_l == min) 
		cout << " no second largest number"<<endl; 
	else
		cout << "The second largest element is "
			<< second_l; 
} 


int main() 
{  int n;
printf("Enter the range");

scanf("%d",&n);
int k;
printf("Enter the array size u want");
scanf("%d",&k);

int a[k];
	for(int i=1;i<=k;i++)

    {


        a[i]=(rand() % n) + 1;

    }
	
	secondlargest(a, n); 
	return 0; 
} 



