#include <stdio.h>
 
int main()
{
    double nota_a, nota_b, resultado_media, aux;
    scanf("%lf", &nota_a);
    scanf("%lf", &nota_b);
    aux = (nota_a*3.5) + (nota_b*7.5);
    resultado_media = aux/11;
    printf("MEDIA = %0.5lf", resultado_media);
    printf("\n");
    return 0;
}
