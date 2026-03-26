#include<stdio.h>
#include<string.h>

int char_count(char s[], char c) {
    int l = strlen(s);
    int count = 0;
    for(int i = 0; i < l; i++) {
        if(s[i]==c) {
            count++;
        }
    } return count;
}

int main() {
    printf("%d\n", char_count("asdasdasd", 'a'));
}