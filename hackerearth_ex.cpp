#include<stdio.h>
#include<stdlib.h>

int main(void){
  long long int test, s1, s2, noVertices, noSides, adjacent, var, ans;
  scanf("%ld", &test);

  while(test--){
    scanf("%ld", &noVertices);
    scanf("%ld", &s1);
    scanf("%ld", &s2);

    noSides = noVertices;
    var = 1;

    adjacent = abs(s1 - s2);
    if( adjacent < 2 || adjacent == noVertices - 1){
      noSides -= 3;
    }
    else if(adjacent == 2 || adjacent == noVertices - 2){
      noSides -= 4;
    }
    else{
      noSides -= 4;
      var += 1;
    }
    ans = noSides * (noVertices - 5) + var;
    printf("%ld\n", ans);
  }
}

