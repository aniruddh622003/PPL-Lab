#include <stdio.h>

void main(){
    float cel, far, kel;
    printf("Enter Temperature in Celcius: ");
    scanf("%f", &cel);

    far = (cel*1.8) + 32;
    kel = cel + 273.15;

    printf("\n\nTemperature in celsius: %.2f\nTemperature in Farenheit: %.2f\nTemperature in Kelvin: %.2f", cel, far, kel);
}