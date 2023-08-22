#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int convertManually(char *str) {
    
    int len = strlen(str);
    int res = 0;

    for (int i = 0; i < len; i++) {

        res = (res * 10) + (str[i] - '0');

    }

    return res;
}

unsigned long otherWay(const char *str) {

    char *ptr;
    long res;
    res = strtol(str, &ptr, 10);  
    return res;
}


int main() {
    char toConvert[255] = "256\0";
    unsigned long man = convertManually(toConvert);
    unsigned long other = otherWay(toConvert);
    printf("%lu\n", man);
    printf("%lu\n", other);
    return 0;
}