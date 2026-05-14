#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void shuffle(int n, int tomb[]) {
    for (int i = n - 1; i >= 1; i--) {
        int j = rand() % (i + 1);
        int t = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = t;
    }
}

int main() {
    srand(time(NULL));
    int szam[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    shuffle(10, szam);
    for (int i = 0; i < 10; i++) {
        printf("%d ", szam[i]);
    }
    printf("\n");

    return 0;
}