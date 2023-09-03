#include <stdio.h>
#include <wchar.h>
#include <locale.h>

/*
    A nice hello world saying
    "Soup is souper good."
*/

int fib(int n) {
    if (n < 2) return n;

    return fib(n - 1) + fib(n - 2);
}

int main() {
    setlocale(LC_ALL, "");

    printf("Soup is souper good.\n");
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");

    // printf("\nFibonnachi:\n");

    // int arrow = 0xe281a1;
    int ar = 61537;

    for (int i = 0; i < 1000; i++) {
        wprintf(L"bitcoins minerados %d %c hash %d\n", i, ar, fib(i));
        // printf("bitcoins minerados %d %s hash %d\n",i,(char*)&arrow, fib(i));
    }
    

    return 0;
}