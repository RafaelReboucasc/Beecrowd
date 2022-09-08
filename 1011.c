#include <stdio.h>
 
int main() {
    double raio, pi = 3.14159, resultado_volume;
    
    scanf("%lf", &raio);
    
    resultado_volume = 4/3.0 * pi * (raio*raio*raio);
    printf("VOLUME = %0.3lf", resultado_volume);
    printf("\n");
    return 0;
}
