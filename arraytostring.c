#include <stdio.h>
#include <string.h>


int main() {

        char str[50] = {'h', 'e', 'l', 'l', 'o', '\0'};
        char buffer[50];
        int len = sizeof(str);


        for (int i = 0; i < len; i++) {
            strncat(buffer, &str[i], 1);
        }

        printf("%s \n", str);
        printf("%s \n", buffer);

}