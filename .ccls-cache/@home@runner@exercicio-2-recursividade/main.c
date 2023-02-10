#include <stdio.h>

int somaimpar(int n){
  if (n == 1)
    return 1;
  if (n > 1)
    return (2*n-1) + somaimpar(n-1);
}

int main() {
  int n;
  scanf("%i",&n);
  printf("%i",somaimpar(n));
}