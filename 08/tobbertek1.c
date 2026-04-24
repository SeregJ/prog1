#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

double tobbertek(int tomb[], int meret, int *min, int *max) {
    *min = tomb[0];
    *max = tomb[0];
    int osszeg = tomb[0];
    for (int i = 1; i < meret; i++) {
        if (tomb[i] < *min) {
            *min = tomb[i];
        }
        if (tomb[i] > *max) {
            *max = tomb[i];
        }
        osszeg += tomb[i];
    }
    return (double)osszeg/meret; 
}

int main() {
    srand(time(NULL));
    int a[10];
    for(int i = 0; i < 10; i++) {
        a[i] = (rand()%90)+10; 
    }
    int min;
    int max;
    double atlag;
    printf("A tömb elemei: ");
    for(int i = 0; i < 10; i++) {
        if (i < 9) {
            printf("%d, ", a[i]);
        } else {
            printf("%d\n", a[i]);
        }
    }
    atlag = tobbertek(a, 10, &min, &max);
    printf("Legkisebb elem: %d\n", min);
    printf("Legnagyobb elem: %d\n", max);
    printf("Az elemek átlaga: %.1f\n", atlag);

    return 0;
}