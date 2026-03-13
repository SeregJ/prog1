#include<stdio.h>

int is_even(int n) {
    if(n%2 == 0) {
        return 1;
    } else return 0;
}

int is_odd(int n) {
    if(is_even(n) == 0) {
        return 1;
    } else return 0;
}

int main() {
    int a = 2;
    printf("a szám páros? %d\n", is_even(a));
    printf("a szám páratlan? %d\n", is_odd(a));
}