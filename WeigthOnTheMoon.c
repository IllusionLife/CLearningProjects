#include <stdio.h>

int main() {

    float fVariableWeigth = 0, fVariableWeigthOnMoon = 0;
    printf ("Please enter your weigth in kilos:\n");
    scanf("%f", &fVariableWeigth);
    
    fVariableWeigthOnMoon = (fVariableWeigth / 100) * 17;
    printf ("\nYour weigth on the moon will be: %f", fVariableWeigthOnMoon);
    return 0;
}
