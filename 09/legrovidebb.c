#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        fprintf(stderr, "Nem adtál meg egyetlen szót sem!\n");
        return 1;
    }
    int minhossz = strlen(argv[1]);
    for (int i = 2; i < argc; i++) {
        int akt = strlen(argv[i]);
        if (akt < minhossz) {
            minhossz = akt;
        }
    }
    for (int i = 1; i < argc; i++) {
        if (strlen(argv[i]) == minhossz) {
            printf("%s\n", argv[i]);
        }
    }

    return 0;
}