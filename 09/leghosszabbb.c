#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) return 1;
    FILE *fajl = fopen(argv[1], "r");
    if (fajl == NULL) return 1;
    int maxhossz = -1;
    int maxsorid = 0;
    int aktsorid = 1;
    int akthossz = 0;
    int c;
    while ((c = fgetc(fajl)) != EOF) {
        if (c == '\n') {
            if (akthossz > maxhossz) {
                maxhossz = akthossz;
                maxsorid = aktsorid;
            }
            aktsorid++;
            akthossz = 0;
        } else {
            akthossz++;
        }
    }
    if (akthossz > 0 && akthossz > maxhossz) {
        maxhossz = akthossz;
        maxsorid = aktsorid;
    }
    fclose(fajl);
    if (maxsorid > 0) {
        printf("%d %d\n", maxsorid, maxhossz);
    }

    return 0;
}