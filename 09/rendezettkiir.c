#include<stdio.h>
#include<stdlib.h>

int hasonlit(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(int argc, char *argv[]) {
    if (argc != 2) return 1;
    FILE *fajl = fopen(argv[1], "r");
    if (fajl == NULL) return 1;
    int *szam = NULL;
    int db = 0;
    int akt;
    while (fscanf(fajl, "%d", &akt) == 1) {
        szam = realloc(szam, (db + 1) * sizeof(int));
        szam[db++] = akt;
    }
    fclose(fajl);
    qsort(szam, db, sizeof(int), hasonlit);
    for (int i = 0; i < db; i++) {
        printf("%d\n", szam[i]);
    }
    free(szam);
    
    return 0;
}