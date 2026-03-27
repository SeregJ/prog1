#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int n, min, max;
    printf("Hány db random számot kérsz?\n");
    scanf("%d", &n);
    printf("Alsó határ: ");
    scanf("%d", &min);
    printf("Felső határ (zárt intervallum): ");
    scanf("%d", &max);
    srand(time(NULL));
    printf("\nA generált számok: ");
    for (int i = 0; i < n; i++) {
        int r = rand() % (max - min + 1) + min;
        printf("%d ", r);
    }
    printf("\n");
}