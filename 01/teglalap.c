#include<stdio.h>

int main() {
    int a = 0;
    int b = 0;
    printf("adja meg egy téglalap A oldalát!\n");
    scanf("%d", &a);
    printf("adja meg egy téglalap B oldalát!\n");
    scanf("%d", &b);
    int c = 2*a+2*b;
    int d = a*b;
    printf("a téglalap kerülete %d, területe %d\n", c, d);
}