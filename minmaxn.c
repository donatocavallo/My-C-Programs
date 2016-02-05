#include<stdio.h>
int main(void)

{
    int  i, j, k, n, max, min;

    printf("Enter four integers:");
		scanf("%10d %10d %10d %10d", &i, &j, &k, &n);
    if (i > j && i > k && i > n)
        max = i;
    else if (j > i && j > k && j > n)
        max = j;
    else if (k > j && k > i && k > n)
        max = k;
    else if (n > j && n > k && n > i)
        max = n;
        if (i < j && i < k && i < n)
            min = i;
        else if (j < i && j < k && j < n)
            min = j;
        else if (k < j && k < i && k < n)
            min = k;
        else if (n < j && n < k && n < i)
            min = n;


    printf("Largest %d\n", max);
    printf("Smallest %d\n", min);

	return 0;
}
