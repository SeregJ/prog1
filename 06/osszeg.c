#include<stdio.h>
#include<stdlib.h>

int main(int db, char *szamok[]) {
    if(db!=3) {
        printf("Hiba! Ket parametert (szamot) kell megadni!");
    }
    int a = atoi(szamok[1]);
    int b = atoi(szamok[2]);
    printf("%d\n", a+b);
}