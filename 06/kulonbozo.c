#include<stdio.h>

int main() {
    int volt[100] = {0}; 
    int szam;
    int db = 0;
    printf("Adj meg 0 vegjelig egesz szamokat az [1, 99] intervallumbol!\n");
    while (1) {
        printf("Szám: ");
        scanf("%d", &szam);
        if (szam == 0) break;
        if (szam < 1 || szam > 99) {
            printf("Ez a szám kívül esik az elfogadható intervallumon!\n");
        } else {
            if (volt[szam] == 0) {
                volt[szam] = 1;
                db++;
            }
        }
    }
    printf("\n%d db különböző szám lett megadva.\n", db);
    if (db > 0) {
        printf("Ezek (növekvő sorrendben): ");
        int elso = 1;
        for (int i = 1; i <= 99; i++) {
            if (volt[i] == 1) {
                if (!elso) printf(", ");
                printf("%d", i);
                elso = 0;
            }
        }
        printf("\n");
    }
}