#include <stdio.h>
#include <stdint.h>


struct __attribute__((__packed__)) str1 {


uint16_t ID: 7; 

uint16_t priority: 3;

uint16_t type: 6;

};

union Prot {

    struct str1 inside;

    uint16_t newField;
} var1;




int main() {

    var1.newField = 0xB7B2;
    
   
    printf("%hu\n", var1.inside.type);
    printf("%hu\n", var1.inside.priority);
    printf("%hu\n", var1.inside.ID);

}