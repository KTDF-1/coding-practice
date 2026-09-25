#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, m;
    scanf("%d %d", &n, &m);
    // 数学原理：弗罗贝尼乌斯硬币问题
    printf("%d\n", n * m - n - m);
    return 0;
}