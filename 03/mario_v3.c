#include<stdio.h>

int main() {
    printf("magassag:\n");
    int m;
    scanf("%d", &m);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m-i-1; j++) {
            printf(" ");
        }
        for(int k = 0; k < i+1; k++) {
            printf("#");
        }
        printf("  ");
        for(int k = 0; k <= i; k++) {
            printf("#");
        }
        printf("\n");
    }
}