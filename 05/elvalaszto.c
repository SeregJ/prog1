#include<stdio.h>

void vonal(char c, int a) {
    for(int i = 0; i < a; i++){
        printf("%c", c);
        if(i == a-1){
            printf("\n");
        }
    }
}

int main() {
    printf("hello\n");
    vonal('-', 30);
    printf("world\n");
}