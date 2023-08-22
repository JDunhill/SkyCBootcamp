#include <stdio.h>



    float convertToF(float c) {
      
        return (c * (9/5)) + 32;
        
    }

    float convertToK (float c) {
        return c + 273.15;
    }


int main() {


    float c = 60;
    float f = convertToF(c);
    printf("%.2f\n", f);
    float k = convertToK(c);
    printf("%.2f\n", k);
    return 0;

}