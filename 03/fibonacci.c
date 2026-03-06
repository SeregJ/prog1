#include<stdio.h>

int fib(int n) {
    if(n <= 1) {
        return n;
    }
    int k = fib(n-1) + fib(n-2);
    return k; 
}

int main() {
    for(int i = 0; i <= 10; i++) {
        printf("%d\n", fib(i));
    }
}