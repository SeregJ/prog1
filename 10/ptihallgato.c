#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int hasonlit(const void *a, const void *b) {
    return strcmp((char*)a, (char*)b);
}

int main() {
    FILE *fajl = fopen("nevek.csv", "r");
    if (fajl == NULL) return 1;
    char nevek[100][100];
    int db = 0;
    char nev[100], szak[100];
    int kor;
    while (fscanf(fajl, " %[^,], %d, %s", nev, &kor, szak) == 3) {
        for (int i = 0; szak[i]; i++) {
            szak[i] = tolower(szak[i]);
        }
        if (strcmp(szak, "pti") == 0) {
            nev[0] = toupper(nev[0]);
            strcpy(nevek[db++], nev);
        }
    }
    fclose(fajl);
    qsort(nevek, db, 100, hasonlit);
    for (int i = 0; i < db; i++) {
        printf("%s%s", nevek[i], (i < db - 1 ? ", " : ""));
    }
    printf("\n");

    return 0;
}