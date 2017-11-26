#include <stdio.h>
#include <string.h>
#include "utils.h"

char *s_gets(char *st, int n) {
    char *ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        while (st[i] != '\n' && st[i] != '\0') {
            i++;
        }
        if (st[i] == '\n') {
            st[i] = '\0';
        } else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }
    return ret_val;
}

void put1(const char *string) {
    while (*string) {
        putchar(*string++);
    }
}

int put2(const char *string) {
    int count = 0;
    while (*string) {
        putchar(*string++);
        count++;
    }
    putchar('\n');
    return count;
}

void fit(char *string, unsigned int size) {
    if (strlen(string) > size) {
        string[size] = '\0';
    }
}