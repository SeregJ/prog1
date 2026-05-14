#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[]) {
    if (argc != 4) return 1;
    srand(time(NULL));
    int sorszam = atoi(argv[1]);
    int min = atoi(argv[2]);
    int max = atoi(argv[3]);
    for (int i = 0; i < sorszam; i++) {
        int hossz = rand() % (max - min + 1) + min;
        for (int j = 0; j < hossz; j++) {
            printf("%c", rand() % 94 + 33);
        }
        printf("\n");
    }

    return 0;
}