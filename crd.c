#include<stdio.h>
/*transforms coordinate format*/
int main(void)

{
    int a, b, c, d, e, f, g, h, i, n, o, p, q, r, s, t, u, v;
    char j, k, l, m, z;

        printf("Enter coordinates:");
        scanf("%1d%1d%*c%1d%1d%*c%1d%1d%*c%1d%1d%1d%*c%*c%*c%*c%*c%*c%*c%*c%*c%*c%*c%*c%1d%1d%*c%1d%1d%*c%1d%1d%*c%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &n, &o, &p, &q, &r, &s, &t, &u, &v);
        printf("Formatted coordinates are: %1d%1d°%1d%1d'%1d%1d.%1d%1d%1d\t%1d%1d°%1d%1d'%1d%1d.%1d%1d%1d\n", a, b, c, d, e, f, g, h, i, n, o, p, q, r, s, t, u, v);

    return 0;
}
