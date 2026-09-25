#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getone(int a)
{
    int b = 0;
    do
    {
        b += a % 10;
        a = a / 10;
    } while (a != 0);
    return b;
}

int main(int argc, char *argv[])
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char str[105];
        scanf("%s", str);
        int len = strlen(str);
        int num_1[6] = {0};
        for (int i = 0; i < 6; i++)
        { // 获取6位数字
            for (int j = i; j <= len; j = j + 6)
            {
                num_1[i] += (int)str[j];
            }
        }
        int num_2[6] = {0};
        for (int i = 0; i < 6; i++)
        { // 依次获取6个一位数
            num_2[i] = getone(num_1[i]);
            while (num_2[i] / 10 != 0)
            {
                num_1[i] = num_2[i];
                num_2[i] = getone(num_1[i]);
            }
        }
        for (int k = 0; k < 6; k++)
        {
            printf("%d", num_2[k]);
        }
        printf("\n");
    }
    return 0;
}