#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>

int main() {
    srand(time(NULL));
    char kis[] = "abcdefghijklmnopqrstuvwxyz";
    char nagy[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char szam[] = "0123456789";
    char spec[] = ".,;'";
    char osszes[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.,;'";
    char jelszo[13];
    int ok = 0;
    while (!ok) {
        int hossz = rand() % 5 + 8;
        int v_kis = 0, v_nagy = 0, v_szam = 0, v_spec = 0;
        for (int i = 0; i < hossz; i++) {
            jelszo[i] = osszes[rand() % strlen(osszes)];
            if (islower(jelszo[i])) v_kis = 1;
            if (isupper(jelszo[i])) v_nagy = 1;
            if (isdigit(jelszo[i])) v_szam = 1;
            if (strchr(spec, jelszo[i])) v_spec = 1;
        }
        jelszo[hossz] = '\0';
        if (v_kis && v_nagy && v_szam && v_spec) ok = 1;
    }
    printf("%s\n", jelszo);

    return 0;
}