#include <stdio.h>


struct myStruct {
    int x;
    char y;
} var1;

typedef struct myStruct str;

typedef struct str2 {
    int j;
} str2;



int main() {

str var1 = { 2, 'j'};
str2 var2 = { 3 };
printf("%d \n%c \n", var1.x, var1.y);
printf("%d\n", var2.j);
return 0;


}   