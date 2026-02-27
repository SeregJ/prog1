#include<stdio.h>

int main() {
    int a = 0;
    printf("adj meg egy számot!\n");
    scanf("%d", &a);
    if(a%2 == 0) {
        a = a-1;
        while(a > 0) {
            printf("%d\n", a);
            a = a - 2;
        }
    } else {
        while(a > 0) {
            printf("%d\n", a);
            a = a - 2;
        }
    }
}