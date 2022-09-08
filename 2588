#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0

int main(int argc, char **argv){
    int c[200],i,cont;
    char pali[1010];

    while (scanf("%s", pali) != EOF)
    {
        
        i = 0;
        memset(c, 0, sizeof(c));
        while (pali[i])
            c[pali[i++]]++;
        for (i = 0, cont = 0; i < 200; ++i)
            if (c[i] & 1)
                ++cont;
        printf("%d\n", cont <= 1 ? 0 : cont - 1);
    }
    return 0;
}
