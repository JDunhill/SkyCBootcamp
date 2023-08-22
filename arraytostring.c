#include <stdio.h>
#include <string.h>


int main() {

        char str[50] = {'h', 'e', 'l', 'l', 'o', '\0'};
        char buffer[50];

        strcat(buffer, str);

        printf("%s \n", str);
        printf("%s \n", buffer);


}