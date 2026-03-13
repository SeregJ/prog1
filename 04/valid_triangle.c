#include<stdio.h>

int valid_triangle(int a, int b, int c) {
    if(a <= 0 || b <= 0 || c <= 0) {
        return 0;
    }
    else if(a + b <= c) {
        return 0;
    }
    else if(b + c <= a) {
        return 0;
    }
    else if(a + c <= b) {
        return 0;
    }
    else return 1;
}

int main() {
    int a, b, c;
    printf("adja meg egy háromszög 3 oldalát!\n");
    scanf("%d %d %d", &a,&b,&c);
    printf("%d", valid_triangle(a,b,c));
}