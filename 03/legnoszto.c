#include<stdio.h>

int gd(int n) {
    for(int i = n/2; i >= 1; i--) {
        if(n%i == 0) {
            return i;
        }
    }
}

int main() {
    for(int i = 0; i <= 50; i++) {
        printf("%d\n", gd(i));
    }
}