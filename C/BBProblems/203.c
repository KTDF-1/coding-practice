#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str1[100], str2[100];
    fgets(str1, 100, stdin);
    fgets(str2, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    int len1 = strlen(str1), len2 = strlen(str2);
    if (len1 != len2)
    {
        printf("NO\n");
        return 0;
    }

    int cnt[256] = {0};
    for (int i = 0; str1[i] != '\0'; i++)
        cnt[(unsigned char)str1[i]]++; // 将字符强制转换为无符号数，并访问这个数的cnt的空间，在其中加一
    for (int i = 0; str2[i] != '\0'; i++)
        cnt[(unsigned char)str2[i]]--;

    for (int i = 0; i < 256; i++)
    {
        if (cnt[i] != 0)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}