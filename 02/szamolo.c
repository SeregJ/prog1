#include<stdio.h>

int main() {
    int a = 0;
    printf("adj meg egy számot!\n");
    scanf("%d", &a);
    for(int i = 1; i < a; i++) {
        printf("%d -> ", i);
    }
    printf("%d\n", a);
}