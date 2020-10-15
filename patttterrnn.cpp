#include <bits/stdc++.h>

using namespace std;
int main ()

{

int i, j, k = 1;

int n;


scanf ("%d", &n);

for (i = 1; i <= n; i++)

{

for (j = 1; j <= i; j++)

{

printf ("%d", k);

if (j < i)

printf ("*");

k++;

}

printf ("\n");

}

k = k - (n + 1);

for (i = n; i >= 0; i--)

{

for (j = 1; j < i; j++)

{

printf ("%d", k);

if (j + 1 < i)

printf ("*");

k--;

}

printf ("\n");

}

}
