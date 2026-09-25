#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char str[100];
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    int i = 0;
    while (str[i] != '\0')
    {
        int j = i + 1;
        while (str[j] != '\0')
        {
            if (tolower(str[i]) == tolower(str[j]))
            {
                printf("NO\n");
                return 0;
            }
            j++;
        }
        i++;
    }
    printf("YES\n");
    return 0;
}