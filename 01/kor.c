#include<stdio.h>
#include<math.h>

int main() {
    int r = 0;
    printf("adja meg egy kör sugarát!\n");
    scanf("%d", &r);
    int c = M_PI*2*r;
    int d = r*r*M_PI;
    printf("a kör kerülete %d, területe %d\n", c, d);
}