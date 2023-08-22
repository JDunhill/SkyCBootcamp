#include <stdio.h>
#include <string.h>


int talk(char* arr) {
    puts(arr);
    static int counter = 0;
    counter++;
    return counter;
}


int main() {

    char arr[128] = {'h', 'e', 'l', 'l', 'o', '\0'};

    for(int i = 0; i < 10; i++) {
        talk(arr);
    }

    printf("%d\n", talk(arr));

}