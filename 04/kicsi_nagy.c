#include<stdio.h>

int min(int a[], int meret) {
    int x = a[0];
    for(int i = 0; i < meret; i++) {
        if(x > a[i]) {
            x = a[i];
        }
    } return x;
}

int max(int a[], int meret) {
    int y = a[0];
    for(int i = 0; i < meret; i++) {
        if(y < a[i]) {
            y = a[i];
        }
    } return y;
}

int main() {
    int a[5] = {0, 10, 1, -2, 3};
    int meret = 5;
    printf("minimum: %d, maximum: %d\n", min(a, meret), max(a, meret));
}