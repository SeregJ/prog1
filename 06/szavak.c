#include<stdio.h>
#include<string.h>

int main() {
    char tomb[100];
    int db = 0;
    int max = 0;
    printf("Adj meg szavakat '*' végjelig!\n");
    while (1) {
        printf("Szó: ");
        if (fgets(tomb, sizeof(tomb), stdin) == NULL) break;
        tomb[strcspn(tomb, "\n")] = '\0';
        if (strcmp(tomb, "*") == 0) {
            break;
        }
        db++;
        int hossz = strlen(tomb);
        if (hossz > max) {
            max = hossz;
        }
    }
    printf("%d db szót adtál meg. A leghosszabb szó %d karakterből áll.\n", db, max);
}