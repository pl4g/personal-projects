#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fib1(int n, int* iterations) {
    if (n < 2) return n;

    *iterations += 1;

    return fib1(n - 1,iterations) + fib1(n - 2,iterations);
}

int fib2(int n) {
  if (n < 2) return n;

  int x,y,res;
  x = 1;
  y = 1;

  for (int i; i < n; i++) {
    res = x + y;
    y = x;
    x = res;
  }

  return res;
}

int main() {
  clock_t before1,before2,time1,time2;
  int iterations,result1,result2;

  before1 = clock();
  result1 = fib1(40, &iterations);
  time1 = clock() - before1;

  before2 = clock();
  result2 = fib2(40);
  time2 = clock() - before2;

  printf("\nThe first fibonnaci function ran for %d miliseconds, with %d iterations.",time1, iterations);
  printf("\nThe second fibonnaci function ran for %d miliseconds.",time2);

  return 1;
}
