#include<stdio.h>
#include<stdlib.h>

void abszolut(int a[], int size) {
    for(int i = 0; i < size; i++) {
        if(a[i]<0){
            a[i] = abs(a[i]);
        }
    }   
}

void kiir(int a[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d", a[i]);
        if(i < size-1){
            printf(", ");
        } else printf("\n");
    }
}

int main() {
    int db;
    printf("hany db szamot szeretnel bevinni?\n");
    scanf("%d", &db);
    int e[db];
    int m[db];
    for(int i = 0; i < db; i++) {
        printf("%d. szam:", i+1);
        scanf("%d", &e[i]);
    }
    for(int i = 0; i < db; i++) {
        m[i]=e[i];
    }
    abszolut(m, db);
    printf("\nA bevitt szamok abszolutertekei:");
    kiir(m,db);
    printf("A megadott szamok:");
    kiir(e,db);
}