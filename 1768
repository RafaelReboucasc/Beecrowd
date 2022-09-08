#include <stdio.h>

int main ()
{
    int n_arvore;
    int i;
    int j;
    int x;
    while (scanf("%d", &n_arvore) != EOF)
    {

        for (i = 0; i < n_arvore; i += 2)
        {
            for (j = 0; j < (n_arvore - i) / 2; j++)
                printf(" ");

            for (x = i; x >= 0; x--)
                printf("*");

            printf("\n");
        }
        for (i = 0; i < n_arvore/2; i++)
            printf(" ");
        printf("*\n");

        for (i = 1; i < n_arvore/2; i++)
            printf(" ");

        printf("***\n\n");
    }
}
