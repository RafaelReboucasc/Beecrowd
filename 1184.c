#include <stdio.h>
int main()
{
    double cont = 0.0, M[12][12];
    char t[2];
    int l, i, j, z, p=0;
    scanf("%s", &t);
    for(i=0;i<=11;i++)
    {
        for(j=0; j<=11; j++)
            scanf("%lf", &M[i][j]);
    }
    for(z=1; z<=11;z++)
    {
        for(l=0; l<=p;l++)
            cont+=M[z][l];
        p++;
    }
    if(t[0]=='S')
        printf("%.1lf\n",cont);
    else if(t[0]=='M')
    {
        cont=cont/66.0;
        printf("%.1lf\n",cont);
    }
    return 0;
}
