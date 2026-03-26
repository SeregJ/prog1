#include<stdio.h>

void elvalaszt(int a[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d", a[i]);
        if(i < size-1){
            printf(", ");
        } else printf("\n");
    }
}

int main() {
    int a[5] = {0, 10, 1, -2, 3};
    int meret = 5;
    elvalaszt(a, meret);
}