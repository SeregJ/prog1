#include<stdio.h>

void feltolt(char t[]) {
    int i;
    for(i = 0; i < 26; i++) {
        t[i] = (char)i+97;
    }
    t[i] = '\0';
}

void kiir(char a[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%c", a[i]);
        if(i < size-1){
            printf(", ");
        } else printf("\n");
    }
}

int main() {
    char s[27];
    feltolt(s);
    kiir(s, 26);
}