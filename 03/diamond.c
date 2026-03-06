#include<stdio.h>

int main() {
    printf("szelesseg:\n");
    int w;
    scanf("%d", &w);
    int i = 1;
    if(w%2 == 1){
        while(i <= w) {
            for(int j = 0; j < (w-i)/2; j++) {
                printf(" ");
            }
            for(int k = 0; k <= i-1; k++) {
                printf("*");
            }
            i = i+2;
            printf("\n");
        }
        i = w-2;
        while(i >= 1) {
            for(int l = 0; l < (w-i)/2; l++) {
                printf(" ");
            }
            for(int m = 0; m <= i-1; m++) {
                printf("*");
            }
            i = i-2;
            printf("\n");
        }
    } else {
        printf("hibás, adjon meg egy pozitív páratlan számot!\n");
    }
}