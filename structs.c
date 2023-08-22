#include <stdio.h>


struct myStruct {
    int x;
    char y;
};



int main() {

struct myStruct var1 = { 2, 'j'};
printf("%d \n%c \n", var1.x, var1.y);
return 0;


}