#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long long n, k;
    scanf("%lld %lld", &n, &k);
    long long res = 0;
    // 递推计算约瑟夫环下标
    for(long long m = 2; m <= n; m++)
    {
        res = (res + k) % m;
    }
    printf("%lld", res + 1);
    return 0;
}