#include<stdlib.h>
#include<stdio.h>
int main(int argc, char * argv[]) {
 int sum = 0;
 int i;
   	if (argc != 3) {
      		printf("invalid input");
      		return 0;
   	}
	sum= atoi(argv[1])+atoi(argv[2]);
 	printf("%d", sum);

 
}
