#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int min;
    int max;
    double avg;
} Tombadat;

Tombadat tombot_elemez(int tomb[], int meret) {
    Tombadat eredmeny;
    eredmeny.min = tomb[0];
    eredmeny.max = tomb[0];
    int sum = 0;
    for(int i = 0; i < meret; i++) {
        if(tomb[i] < eredmeny.min) {
            eredmeny.min = tomb[i];
        }
        if(eredmeny.max < tomb[i]) {
            eredmeny.max = tomb[i];
        }
        sum = sum + tomb[i];
    }
    eredmeny.avg = (double)sum/meret;
    return eredmeny;
}

int main() {
    srand(time(NULL));
    int tomb[10];
    printf("A tömb elemei: ");
    int meret = 10;
    for(int i = 0; i < meret; i++) {
        tomb[i] = (rand()%90)+10;
        printf("%d", tomb[i]);
        if(i < 9) {
            printf(", ");
        }
    }
    printf("\n");
    Tombadat adat = tombot_elemez(tomb, meret);
    printf("Legkisebb elem: %d\n", adat.min);
    printf("Legnagyobb elem: %d\n", adat.max);
    printf("Az elemek átlaga: %.1lf\n", adat.avg);

    return 0;
}