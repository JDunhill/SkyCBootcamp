#include <stdio.h>
#include <string.h>

void talk(char* arr) {
    puts(arr);
}


int main() {

    char arr[128] = {'h', 'e', 'l', 'l', 'o', '\0'};
    talk(arr);

}