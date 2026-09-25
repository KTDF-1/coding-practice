#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, m, k, z, sum = 0;
    scanf("%d", &n);
    m = n;
    while (m > 3)
    {
        k = m / 3;
        sum += k;
        z = m % 3;
        m = k + z;
    }
    sum += n;
    printf("%d", sum);
    return 0;
}