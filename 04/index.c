#include<stdio.h>

int indexx(int a[], int meret, int ind) {
    for(int i = 0; i < meret; i++) {
        if(a[i] == ind) {
            return i;
        }
    } return -1;
}

int main() {
    int a[5] = {0, 10, 1, -2, 3};
    int meret = 5;
    int ind = -2;
    if(indexx(a, meret, ind) == -1) {
        printf("nem található a tömbben a %d\n", ind);
    } else
    printf("a %d a %d indexen található\n", ind, indexx(a, meret, ind));
}