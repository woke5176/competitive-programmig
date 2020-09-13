
#include<stdlib.h>
#include<stdio.h> 
int main()
{
    
    int m,n;
  printf("Enter the numbers you want\n");
  scanf("%d%d", &m, &n);
 int *i,*j;
   i=&m;
   j=&n;
   int temp;
   temp = *j;
   *j = *i;
   *i = temp;
 
printf("Swapped: %d %d",m,n);
 
   return 0;
}
 
