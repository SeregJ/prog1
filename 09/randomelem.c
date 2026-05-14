#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int choice(const int n, const int tomb[]) {
    return tomb[rand() % n];
}

int main() {
    srand(time(NULL));
    int szam[] = {1, 2, 3, 4, 5};
    printf("%d\n", choice(5, szam));

    return 0;
}