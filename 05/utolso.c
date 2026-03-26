#include<stdio.h>
#include<string.h>

int rfind_char(char s[], char c) {
    int l = strlen(s);
    for(int i = l-1; i >= 0; i--) {
        if(s[i]==c) {
            return i;
        }
    } return -1;
}

int main() {
    printf("%d\n", rfind_char("asdasdasd", 'a'));
}