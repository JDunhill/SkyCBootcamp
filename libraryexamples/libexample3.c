#include "example3.h"
#include <stdio.h>
#include <string.h>


char* reverse(char *string) {
    int len = strlen(string);
    for (int i = 0; i < len / 2; i++) {
        char temp = string[i];
        string[i] = string[len - 1 - i];
        string[len - 1 -i] = temp;

    }
    return string;
}

char* replace(char *string) {
    int len = strlen(string);
    char bob[] = "Bob";
    int bob_len = strlen(bob);
    for (int i = 0; i < bob_len; i++) {
        string[i] = bob[i];
    }
    string[bob_len] = '\0';
    return string;
}