#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int db, min, max, uj, van;
    printf("Hány db random számot kérsz?\n");
    scanf("%d", &db);
    printf("Alsó határ: ");
    scanf("%d", &min);
    printf("Felső határ (zárt intervallum): ");
    scanf("%d", &max);
    if (db > (max - min + 1)) {
        printf("Hiba: Túl sok számot kértél, a megadott intervallumban nincs ennyi különböző szám!\n");
        return 1;
    }
    int tomb[db];
    srand(time(NULL));
    int i = 0;
    while (i < db) {
        uj = (rand() % (max - min + 1)) + min;
        van = 0;
        for (int j = 0; j < i; j++) {
            if (tomb[j] == uj) {
                van = 1;
                break;
            }
        }
        if (!van) {
            tomb[i] = uj;
            i++;
        }
    }
    for (i = 0; i < db - 1; i++) {
        for (int j = 0; j < db - i - 1; j++) {
            if (tomb[j] > tomb[j+1]) {
                int temp = tomb[j];
                tomb[j] = tomb[j+1];
                tomb[j+1] = temp;
            }
        }
    }
    printf("\nA generált számok:");
    for (i = 0; i < db; i++) {
        printf(" %d", tomb[i]);
    }
    printf("\n");
    
    return 0;
}