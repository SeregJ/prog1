#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    if (argc == 1) {
        printf("Nem adtál meg egyetlen szót sem!\n");
        return 1;
    }
    int min = strlen(argv[1]);
    for (int i = 2; i < argc; i++) {
        int len = strlen(argv[i]);
        if (len < min) {
            min = len;
        }
    }
    for (int i = 1; i < argc; i++) {
        if (strlen(argv[i]) == min) {
            printf("%s\n", argv[i]);
        }
    }

    return 0;
}