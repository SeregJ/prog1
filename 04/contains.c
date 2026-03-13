#include<stdio.h>

int contains(int a[], int meret, int cont) {
    for(int i = 0; i < meret; i++) {
        if(a[i] == cont) {
            return 1;
        }
    } return 0;
}

int main() {
    int a[5] = {0, 10, 1, -2, 3};
    int meret = 5;
    int cont = -2;
    printf("tartalmazza a(z) %d számot? %d\n", cont, contains(a,meret,cont));
}