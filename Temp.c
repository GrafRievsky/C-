#include <stdio.h>

int main(){
    float Farengait;
    float Celsius;
    
    printf(">>>");
    scanf("%f", &Celsius);

    Farengait =  (Celsius * 1.8) + 32;

    printf("Температура в цельсиях: %.2f \n", Celsius);
    printf("Температура в фаренгейтах: %.2f \n", Farengait);
    
    return 0;
}