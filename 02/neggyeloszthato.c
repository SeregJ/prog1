#include<stdio.h>

int main() {
    int a = 0;
    printf("adj meg egy számot!\n");
    scanf("%d", &a);
    int b = 4;
    while(b < a) {
        printf("%d\n", b);
        b = b + 4;
    }
}