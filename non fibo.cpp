#include <bits/stdc++.h>
using namespace std;

 
  int isFibonacci(int data) {
        int num1 = 0, num2 = 1, temp, flag = 0;

    
        if (data == num1 || data == num2) {
                return 1;
        }

        while (num2 <= data) {
                temp = num2;
                num2 = num1 + num2;
                num1 = temp;
                if (num2 == data) {
                        return 1;
                }
        }

        return 0;
  }

  int main() {
        int i, n, flag;

      
        printf("Enter the value for n:");
        scanf("%d", &n);

        /* print non-fibonacci numbers alone */
        for (i = 1; i <= n; i++) {
                flag = isFibonacci(i);
                if (!flag)
                        printf("%d ", i);
        }

        printf("\n");
        return 0;
  }
