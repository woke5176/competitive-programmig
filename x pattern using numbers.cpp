#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);


    for(i=1; i<=N; i++)
    {

        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        printf("%d", i);

        for(j=1; j<=((N - i) * 2 - 1); j++)
        {
            printf(" ");
        }

  
        if(i != N)
            printf("%d", i);

  
        printf("\n");
    }

  
    for(i=N-1; i>=1; i--)
    {
       
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        printf("%d", i);

        for(j=1; j<=((N - i ) * 2 - 1); j++)
        {
            printf(" ");
        }

        printf("%d", i);
        printf("\n");
    }

    return 0;
}

