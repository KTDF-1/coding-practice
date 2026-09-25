#include <stdio.h>
#include <stdlib.h>

//罗马数字规则：
// 当前数字 ≥ 其右边数字：正常相加
// 当前数字 ＜ 其右边数字：后面的值减去前面的值
// for(int j=0;str[j+1] != '\0'&& str[j+1] != '\n';j++)
// {
//     if(当前 >= 下一个)
//         sum += 当前
//     else
//         sum += 下一个-当前
// }

int get_num(char ch){
    switch (ch){
    case 'I':return 1;
    case 'V':return 5;
    case 'X':return 10;
    case 'L':return 50;
    case 'C':return 100;
    case 'D':return 500;
    case 'M':return 1000;
    default:return 0;
    }
}
int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++){
        char str[20];
        fgets(str,20,stdin);
        int sum = 0;
        int j;
        for(j=0; str[j+1]!='\0' && str[j+1]!='\n'; j++)
        {
            int cur = get_num(str[j]);
            int next = get_num(str[j+1]);
            if(cur < next)
                sum -= cur;
            else
                sum += cur;
        }
        sum += get_num(str[j]);
        printf("%d\n",sum);
    }
    return 0;
}
