#include <stdio.h>
#include "headerff.h"


int main(void) {

    float input = 0;
    char term;
    printf("Please input a value to calculate: ");
    if (scanf("%f%c", &input, &term) != 2 || term != '\n') {
        printf("please enter a valid integer. \n");
    
    } else {
        printf("Your result is: %0.2f\n", calculate(input));
    }

    return 0;

}