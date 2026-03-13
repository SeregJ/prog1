#include<stdio.h>

int rendezett(int tomb[], int meret) {
    if(meret == 0) {
        return 1;
    } else
    for(int i = 0; i < meret-1; i++) {
        if(tomb[i] > tomb[i+1]) {
            return 0;
        }
    } return 1;
}

int main() {
    int a[5] = {0, 1, 1, 2, 3};
    int meret = 5;
    printf("rendezett? %d\n", rendezett(a, meret));
}