#include<stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int i;
    for(i = 0; i < 1001; i++) {
    if(i%3 == 0) {
        a = a + i;
    }
    if(i%5 == 0) {
        b = b + i;
    }
    }
    int c = a + b;
    printf("a számok összege: %d\n", c);
}