#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#include <stdbool.h> // 引入true和false

// 临时解决中文乱码问题，在PowerShell中输入下面命令：
//[Console]::OutputEncoding = [System.Text.Encoding]::UTF8
// 排名：8942

// 1026 数字逆序输出
// int main()
// {
//     int str[10];
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &ch);
//     }
//     for (int i = 9; i >= 0; i--)
//     {
//         printf("%d ", ch);
//     }
//     return 0;
// }

// 1029 自定义函数处理素数
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     if (n < 2)
//     {
//         printf("not prime\n");
//         return 0;
//     }
//     else if (n == 2)
//     {
//         printf("prime\n");
//         return 0;
//     }
//     else
//     {
//         for (int i = 2; i < n; i++)
//         {
//             if (n % i == 0)
//             {
//                 printf("not prime\n");
//                 return 0;
//             }
//         }
//         printf("prime\n");
//     }
// }

// 1030 二维数组的转置
// void transpose(){
//     int a[3][3];
//     for(int i =0; i<3; i++){
//         for(int j =0;j<3;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(int i = 0;i<3;i++){
//         for(int j =i+1;j<3;j++){
//             int temp = a[i][j];
//             a[i][j] = a[j][i];
//             a[j][i] = temp;
//         }
//     }
//     for(int i =0; i<3; i++){
//         for(int j =0;j<3;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
// }

// 1031 自定义函数之字符串反转
// char *reverse_string(char str[])
// {
//     int len = strlen(str);
//     int left = 0;
//     int right = len - 1;
//     while (left < right)
//     {
//         char temp = str[left];
//         str[left] = str[right];
//         str[right] = temp;
//         left++;
//         right--;
//     }
//     return str;
// }

// 1032 自定义函数之字符串连接
// void concatenate_strings(char str1[], char str2[])
// {
//     int len1 = strlen(str1);
//     int len2 = strlen(str2);
//     if (len1 + len2 >= 1000)
//     {
//         printf("Error: concatenated string exceeds buffer size.\n");
//         return;
//     }
//     strcat(str1, str2);
// }

// 1033 自定义函数之字符提取
// void extract_characters(char str[], char arr[])
// {
//     int lenth = strlen(str);
//     int j = 0;
//     for (int i = 0; i < lenth; i++)
//     {
//         if (ch == 'a'){
//             arr[j] = 'a';
//             j++;
//         }
//         else if (ch == 'e'){
//             arr[j] = 'e';
//             j++;
//         }
//         else if (ch == 'i'){
//             arr[j] = 'i';
//             j++;
//         }
//         else if (ch == 'o'){
//             arr[j] = 'o';
//             j++;
//         }
//         else if (ch == 'u'){
//             arr[j] = 'u';
//             j++;
//         }
//     }
//     arr[j] = '\0';
// }

// 1034 自定义函数之数字分离
// void separate_numbers(int num)
// {
//     int dig[4];
//     for (int i = 0; i < 4; i++)
//     {
//         dig[i] = num % 10;
//         num /= 10;
//     }
//     for (int i = 3; i >= 0; i--)
//     {
//         printf("%d ", dig[i]);
//     }
// }

// 1035 自定义函数之字符类统计
// void count_character_classes(char str[])
// {
//     int a,b,c,d;
//     a = b = c = d = 0;
//     for (int i = 0; ch != '\0'; i++)
//     {
//         if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//         {
//             a++;
//         }
//         else if (ch >= '0' && ch <= '9')
//         {
//             b++;
//         }
//         else if (ch == ' ')
//         {
//             c++;
//         }
//         else
//         {
//             d++;
//         }
//     }
//     printf("%d %d %d %d", a, b, c, d);
// }

// 1036 带参数宏定义练习
// #define SWAP(x,y) {int temp = x;x = y;y= temp;}

// 1037 宏定义的练习
// #define DIV(x,y) {x%y}

// 1038 宏定义练习之三角形面积
// #define S(a, b, c) (a + b + c) / 2.0
// #define AREA(a, b, c) sqrt(S(a, b, c) * (S(a, b, c) - a) * (S(a, b, c) - b) * (S(a, b, c) - c))

// 1039 宏定义练习之闰年判断
// #define LEAP_YEAR(y) if(((y % 4) == 0 && (y % 100) != 0) || (y % 400) == 0){printf("L");}else{printf("N");}

// 1040 实数的打印
// void print_real(float num)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         printf("%6.2f", num);
//         int j = i;
//         while(j>0){
//             printf("\t%6.2f", num);
//             j--;
//         }
//         printf("\n");
//     }
// }

// 1041 宏定义之找最大数
// # define MAX(x,y,z) ((x)>(y)?((x)>(z)?(x):(z)):((y)>(z)?(y):(z)))
// void find_max(float a, float b, float c)
// {
//     printf("%.3f\n", MAX(a, b, c));
// }

// 1042 电报加密
// void encrypt_telegram(char str[])
// {
//     for (int i = 0; ch != '\0'; i++)
//     {
//         if (ch >= 'a' && ch < 'z' || ch >= 'A' && ch < 'Z')
//         {
//             ch = ch + 1;
//         }
//         if(ch == 'z')
//         {
//             ch = 'a';
//         }
//         else if (ch == 'Z')
//         {
//             ch = 'A';
//         }
//         else
//         {
//             ch = ch;
//         }
//     }
//     printf("%s", str);
// }

// 1043 三个数字的排序
// int main(){
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     if(a<b){
//         if(a<c){
//             if(b<c){
//                 printf("%d %d %d",a,b,c);
//             }
//             else{
//                 printf("%d %d %d",a,c,b);
//             }
//         }
//         else{
//             printf("%d %d %d",c,a,b);
//         }
//     }else{
//         if(b<c){
//             if(a<c){
//                 printf("%d %d %d",b,a,c);
//             }
//             else{
//                 printf("%d %d %d",b,c,a);
//             }
//         }
//         else{
//             printf("%d %d %d",c,b,a);
//         }
//     }
//     return 0;
// }

// 1044 三个字符串的排序
// int main()
// {
//     char a[105], b[105], c[105];
//     char temp[105];
//     scanf("%s %s %s", a, b, c);
//     if (strcmp(a, b) > 0)
//     {
//         strcpy(temp, a);
//         strcpy(a, b);
//         strcpy(b, temp);
//     }
//     if (strcmp(a, c) > 0)
//     {
//         strcpy(temp, a);
//         strcpy(a, c);
//         strcpy(c, temp);
//     }
//     if (strcmp(b, c) > 0)
//     {
//         strcpy(temp, b);
//         strcpy(b, c);
//         strcpy(c, temp);
//     }
//     printf("%s\n%s\n%s\n", a, b, c);
//     return 0;
// }

// 1045 自定义函数之整数处理
// void print(int num[])
// {
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &num[i]);
//     }
// }
// void process_integer(int num[])
// {
//     int max, min, ip1 = 0, ip2 = 0;
//     max = num[0];
//     min = num[0];
//     for (int i = 1; i < 10; i++)
//     {
//         if (num[i] > max)
//         {
//             max = num[i];
//             ip1 = i;
//         }
//         if (num[i] < min)
//         {
//             min = num[i];
//             ip2 = i;
//         }
//     }
//     if (ip1 == 0 && ip2 != 9)
//     {
//         num[ip1] = num[9];
//         num[9] = max;
//         num[ip2] = num[0];
//         num[0] = min;
//     }
//     else if (ip1 == 0 && ip2 == 9)
//     {
//         num[ip1] = num[9];
//         num[9] = max;
//     }
//     else
//     {
//         num[ip2] = num[0];
//         num[0] = min;
//         num[ip1] = num[9];
//         num[9] = max;
//     }
// }
// void con(int num[])
// {
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d ", num[i]);
//     }
// }

// 1046 自定义函数之数字后移
// void move_numbers(int num[], int n, int k)
// {
//     int num_temp[k];
//     for (int i = n - k, j = 0; i < n; i++, j++)
//     {
//         num_temp[j] = num[i];
//     }
//     for (int i = n - k - 1; i >= 0; i--)
//     {
//         num[i + k] = num[i];
//     }
//     for (int i = 0; i < k; i++)
//     {
//         num[i] = num_temp[i];
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int num[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &num[i]);
//     }
//     int k;
//     scanf("%d", &k);
//     move_numbers(num, n, k);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", num[i]);
//     }
//     return 0;
// }

// 1048 自定义函数之字符串拷贝
// void copy_string(char str[], char str1[], int n, int m)
// {
//     for (int i = 0; i <= n - m; i++)
//     {
//         str1[i] = str[i + m - 1];
//     }
//     str1[n - m+1] = '\0';
// }
// int main()
// {
//     int n, m;
//     scanf("%d", &n);
//     char str[n];
//     scanf("%s", str);
//     scanf("%d", &m);
//     char str1[n - m + 2];
//     copy_string(str, str1, n, m);
//     printf("%s", str1);
// }

// 1049 结构体之时间设计
// const int month_L[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
// const int month_P[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
// struct Time
// {
//     int year;
//     int month;
//     int day;
// };
// void time_(struct Time t)
// {
//     int sum = 0;
//     if ((t.year % 4 == 0 && t.year % 100 != 0) || t.year % 400 == 0)
//     {
//         for (int i = 0; i < t.month - 1; i++)
//         {
//             sum += month_L[i];
//         }
//     }
//     else
//     {
//         for (int i = 0; i < t.month - 1; i++)
//         {
//             sum += month_P[i];
//         }
//     }
//     sum += t.day;
//     printf("%d", sum);
// }
// int main()
// {
//     struct Time t;
//     scanf("%d %d %d", &t.year, &t.month, &t.day);
//     time_(t);
//     return 0;
// }

// 1050 结构体之成绩记录
// struct Grade
// {
//     char id[5];
//     char name[10];
//     int math;
//     int english;
//     int language;
// };
// void input(struct Grade *G)
// {
//     scanf("%s %s %d %d %d", G->id, G->name, &G->math, &G->english, &G->language);
// }
// void print(struct Grade G)
// {
//     printf("%s,%s,%d,%d,%d\n", G.id, G.name, G.math, G.english, G.language);
// }
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     struct Grade stu[100];
//     for (int i = 0; i < N; i++)
//     {
//         input(&stu[i]);
//     }
//     for (int i = 0; i < N; i++)
//     {
//         print(stu[i]);
//     }
//     return 0;
// }

// 1051 结构体之成绩统计2
// struct Grade
// {
//     char id[5];
//     char name[10];
//     int math;
//     int english;
//     int language;
//     int grade;
// };
// void input(struct Grade *G)
// {
//     scanf("%s %s %d %d %d", G->id, G->name, &G->math, &G->english, &G->language);
//     G->grade = (G->math + G->english + G->language);
// }
// void chuli(struct Grade G, int sum[4], int i)
// {
//     sum[0] += G.math;
//     sum[1] += G.english;
//     sum[2] += G.language;
//     if (sum[3] < G.grade)
//     {
//         sum[3] = G.grade;
//         sum[4] = i;
//     }
// }
// void print(struct Grade G, int sum[4], int n)
// {
//     printf("%d %d %d\n", sum[0] / n, sum[1] / n, sum[2] / n);
//     printf("%s %s %d %d %d\n", G.id, G.name, G.math, G.english, G.language);
// }
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     struct Grade stu[100];
//     int sum[5] = {0};
//     for (int i = 0; i < N; i++)
//     {
//         input(&stu[i]);
//     }
//     for (int i = 0; i < N; i++)
//     {
//         chuli(stu[i], sum, i);
//     }
//     print(stu[(sum[4])], sum, N);
//     return 0;
// }

// 1053 二级C语言-平均值计算
// void calculate_average()
// {
//     int num[10];
//     float sum = 0;
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &num[i]);
//         sum += num[i];
//     }
//     float average = sum / 10.0;
//     int count = 0;
//     for (int i = 0; i < 10; i++)
//     {
//         if (num[i] > average)
//         {
//             count++;
//         }
//     }
//     printf("%d\n", count);
// }

// 1055 二级C语言-进制转换
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     printf("%o\n", n); // 直接使用printf自带的进制格式
//     // 自己编写方法
//     int arr[100], i = 0;
//     if (n == 0)
//     {
//         printf("0");
//         return 0;
//     }
//     else
//     {
//         while (n > 0)
//         {
//             arr[i++] = n % 8;
//             n = n / 8;
//         }
//         while (i > 0)
//         {
//             printf("%d", arr[--i]);
//         }
//     }
//     return 0;
// }

// 1056 二级C语言-温度转换
// int main()
// {
//     int f;
//     scanf("%d", &f);
//     float c = ((f - 32) * 5) / 9.0;
//     printf("%.2f", c);
//     return 0;
// }

// 1057 二级C语言-分段函数
// void hanshu(int x)
// {
//     if (x < 1)
//     {
//         printf("%.2f", x);
//         return;
//     }
//     else if (x >= 1 && x < 10)
//     {
//         printf("%.2f", x * 2.0 - 1);
//         return;
//     }
//     else if (x >= 10)
//     {
//         printf("%.2f", x * 3.0 - 11);
//         return;
//     }
// }
// int main()
// {
//     int x;
//     float y;
//     scanf("%d", &x);
//     hanshu(x);
//     return 0;
// }

// 1058 二级C语言-求偶数和
// int main()
// {
//     int n, sum = 0;
//     scanf("%d", &n);
//     for (int i = 0; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             sum += i;
//         }
//     }
//     printf("%d\n", sum);
//     return 0;
// }

// 1059 二级C语言-等差数列
// int main()
// {
//     int n, sum = 0;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         sum += (3 * i + 2);
//     }
//     printf("%d", sum);
//     return 0;
// }

// 1060 二级C语言-同因查找
// // 方法一：
// // 求最大公约数 gcd
// int gcd(int a, int b)
// {
//     while (b)
//     {
//         int t = a % b;
//         a = b;
//         b = t;
//     }
//     return a;
// }
// // 求最小公倍数 lcm(a,b) = a*b/gcd(a,b)
// int lcm(int a, int b)
// {
//     return a / gcd(a, b) * b;
// }
// int main()
// {
//     int L = lcm(lcm(2, 3), 7); // 运行时计算LCM=42
//     for (int x = L; x < 1000; x += L)
//         printf("%d\n", x);
//     return 0;
// }
// // 方法二：
// int main()
// {
//     for (int i = 10; i < 1000; i++)
//     {
//         if (i % 2 == 0 && i % 3 == 0 & i % 7 == 0)
//         {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }

// 1061 二级C语言-计负均正
// int main()
// {
//     int n, numz = 0, numf = 0;
//     float pj = 0.0;
//     for (int i = 0; i < 20; i++)
//     {
//         scanf("%d", &n);
//         if (n < 0)
//         {
//             numf++;
//         }
//         else if (n > 0)
//         {
//             pj += n;
//             numz++;
//         }
//     }
//     if (numz != 0)
//     {
//         printf("%d\n%.2f\n", numf, pj / numz);
//     }
//     else
//     {
//         printf("%d\n0.00\n", numf);
//     }
//     return 0;
// }

// 1062 二级C语言-公约公倍
// 求最大公约数，辗转相除法
// int gcd(int a, int b)
// {
//     while (b != 0)
//     {
//         int temp = a % b;
//         a = b;
//         b = temp;
//     }
//     return a;
// }
// // 求最小公倍数，欧几里得算法
// int lcm(int a, int b)
// {
//     int g = gcd(a, b);
//     return a / g * b;
// }
// int main()
// {
//     int m, n;
//     scanf("%d %d", &m, &n);
//     printf("%d\n%d\n", gcd(m, n), lcm(m, n));
//     return 0;
// }

// 1063 二级C语言-统计字符
// int main()
// {
//     int a = 0, b = 0, c = 0, d = 0;
//     char ch;
//     while((ch = getchar()) != '\n')
//     {
//         if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//         {
//             a++;
//         }
//         else if (ch == ' ')
//         {
//             b++;
//         }
//         else if (ch >= '0' && ch <= '9')
//         {
//             c++;
//         }
//         else
//         {
//             d++;
//         }
//     }
//     printf("%d\n%d\n%d\n%d\n", a, b, c, d);
// }

// 1064 二级C语言-阶乘数列
// int main()
// {
//     double sum = 0.0;
//     double num = 1.0;
//     for (int i = 1; i < 31; i++)
//     {
//         num *= i;  // 递推i!，不用重复循环
//         sum += num;
//     }
//     printf("%.2e\n", sum);
//     return 0;
// }

// 1065 二级C语言-最小绝对值
// int main()
// {
//     int num[10];
//     scanf("%d", &num[0]);
//     int max = abs(num[0]), ip = 0;
//     for (int i = 1; i < 10; i++)
//     {
//         scanf("%d", &num[i]);
//         if (max > abs(num[i]))
//         {
//             max = abs(num[i]);
//             ip = i;
//         }
//     }
//     int temp = num[9];
//     num[9] = num[ip];
//     num[ip] = temp;
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d ", num[i]);
//     }
//     return 0;
// }

// 1066 二级C语言-自定义函数
// double fact(int n)
// {
//     if (n == 1 || n == 0)
//     {
//         return 1;
//     }
//     return n * fact(n - 1);
// }
// double mypow(double x, int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     return x * mypow(x, n - 1);
// }
// int main()
// {
//     double x;
//     int n;
//     double sum = 0.0;
//     scanf("%lf %d", &x, &n);
//     for (int i = 1; i <= n; i++)
//     {
//         double term = (mypow(x, i) / fact(i));
//         if (i % 2 == 1)
//             sum += term;
//         else
//             sum -= term;
//     }
//     printf("%.4f", sum);
//     return 0;
// }

// 1067 二级C语言-分段函数
// void f_1(int x)
// {
//     printf("%.2f", fabs((double)x));
// }
// void f_2(int x)
// {
//     printf("%.2f", sqrt((x + 1)));
// }
// void f_3(int x)
// {
//     printf("%.2f", pow((x + 2), 5));
// }
// void f_4(int x)
// {
//     printf("%.2f", (double)((2 * x) + 5));
// }
// int main()
// {
//     int x;
//     scanf("%d", &x);
//     if (x < 0)
//         f_1(x);
//     else if (x >= 0 && x < 2)
//         f_2(x);
//     else if (x >= 2 && x < 4)
//         f_3(x);
//     else if (x >= 4)
//         f_4(x);
//     return 0;
// }

// 1068 二级C语言-温度转换
// int ctof(int c)
// {
//     return (32 + (c * 9 / 5.0));
// }
// int main()
// {
//     for (int c = -100; c <= 150; c = c + 5)
//     {
//         printf("c=%d->f=%d\n", c, ctof(c));
//     }
//     return 0;
// }

// 1069 二级C语言-寻找矩阵最值
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int num[n][n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &num[i][j]);
//         }
//     }
//     int max = num[0][0];
//     int p = 0, q = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (abs(max) < abs(num[i][j]))
//             {
//                 max = num[i][j];
//                 p = i;
//                 q = j;
//             }
//         }
//     }
//     printf("%d %d %d", max, p + 1, q + 1);
//     return 0;
// }

// 1070 二级C语言-成绩归类
// int main()
// {
//     int y = 0, j = 0, b = 0, n;
//     while (scanf("%d", &n))
//     {
//         if (n <= 0)
//         {
//             break;
//         }
//         else if (n >= 85)
//         {
//             y++;
//         }
//         else if (n < 85 && n >= 60)
//         {
//             j++;
//         }
//         else if (n < 60 && n > 0)
//         {
//             b++;
//         }
//     }
//     printf(">=85:%d\n60-84:%d\n<60:%d", y, j, b);
//     return 0;
// }

// 1071 二级C语言-阶乘公式求值
// double fact(int k)
// {
//     if (k == 1)
//         return 1;
//     return k * (fact(k - 1));
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     double sum = 0.0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += 1 / fact(i);
//     }
//     printf("sum=%.5f\n", sum);
//     return 0;
// }

// 1072 汽水瓶
// int main()
// {
//     int n;
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &n);
//         int sum = 0;
//         if (n == 0)
//         {
//             break;
//         }
//         while (n / 3 != 0)
//         {
//             sum += n / 3;
//             n = n / 3 + n % 3;
//         }
//         if (n == 2)
//         {
//             sum += 1;
//         }
//         printf("%d\n", sum);
//     }
//     return 0;
// }

// 1073 弟弟的作业
// int main()
// {
//     int a, b, count = 0;
//     char op;
//     char ans[20];
//     while (scanf("%d%c%d=%s", &a, &op, &b, ans) != EOF)
//     {
//         if (strcmp(ans, "?") == 0)
//         {
//             continue;
//         }
//         int c;
//         sscanf(ans, "%d", &c);
//         int real_ans;
//         if (op == '+')
//             real_ans = a + b;
//         else
//             real_ans = a - b;
//         if (real_ans == c)
//         {
//             count++;
//         }
//     }
//     printf("%d", count);
//     return 0;
// }

// 1074 数字整除
// int main()
// { // 破题目原理，这个原理适合通过递推其方法人工求解，但不适合机器，递推求模的方法才适合计算机（其实也就是正常的除法）
//     char num[105];
//     while (scanf("%s", num) != EOF)
//     {
//         if (strcmp(num, "0") == 0)
//         {
//             break;
//         }
//         int ans = 0;
//         for (int i = 0; i < strlen(num); i++)
//         {
//             ans = (ans * 10 + (num[i]-'0')) % 17;
//         }
//         if (ans == 0)
//         {
//             printf("1\n");
//         }
//         else
//         {
//             printf("0\n");
//         }
//     }
//     return 0;
// }

// 1083 Hello,world!
// int main()
// {
//     int num;
//     while (scanf("%d",&num)!= EOF)
//     {
//         putchar((char)num);
//     }
//     return 0;
// }

// 1084 用筛法求之N内的素数
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int is_prime[100000] = {1};
//     for (int i = 2; i <= n; i++)
//         is_prime[i] = 1;
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (is_prime[i])
//         {
//             for (int j = i * i; j <= n; j += i)
//             {
//                 is_prime[j] = 0;
//             }
//         }
//     }
//     for (int i = 2; i <= n; i++)
//     {
//         if (is_prime[i])
//             printf("%d\n", i);
//     }
//     return 0;
// }

// 1085 A+B for Input-Output Practice (I)
// int main()
// {
//     int a, b;
//     while (scanf("%d %d", &a, &b) == 2)
//     {
//         printf("%d", a + b);
//     }
//     return 0;
// }

// 1086 A+B for Input-Output Practice (II)
// int main()
// {
//     int n, a, b;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d %d", &a, &b);
//         printf("%d\n", a + b);
//     }
//     return 0;
// }

// 1087 A+B for Input-Output Practice (III)
// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     while (a != 0 || b != 0)
//     {
//         printf("%d\n", a + b);
//         scanf("%d %d", &a, &b);
//     }
//     return 0;
// }

// 1088 A+B for Input-Output Practice (IV)
// int main()
// {
//     int n;
//     while (scanf("%d", &n) == 1)
//     {
//         if (n == 0)
//         {
//             break;
//         }
//         int sum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             int m;
//             scanf("%d", &m);
//             sum += m;
//         }
//         printf("%d\n", sum);
//     }
//     return 0;
// }

// 1089 A+B for Input-Output Practice (V)
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         int m;
//         while (scanf("%d", &m) == 1)
//         {
//             int z, sum = 0;
//             for (int j = 0; j < m; j++)
//             {
//                 scanf("%d", &z);
//                 sum += z;
//             }
//             printf("%d\n", sum);
//         }
//     }
//     return 0;
// }

// 1090  A+B for Input-Output Practice (VI)
// int main()
// {
//     int m;
//     while (scanf("%d", &m) == 1)
//     {
//         int z, sum = 0;
//         for (int j = 0; j < m; j++)
//         {
//             scanf("%d", &z);
//             sum += z;
//         }
//         printf("%d\n", sum);
//     }
//     return 0;
// }

// 1091 A+B for Input-Output Practice (VII)
// int main()
// {
//     int a, b;
//     while (scanf("%d %d", &a, &b) == 2)
//     {
//         printf("%d\n\n", a + b);
//     }
//     return 0;
// }

// 1092 A+B for Input-Output Practice
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         int m;
//         while (scanf("%d", &m) == 1)
//         {
//             int z, sum = 0;
//             for (int j = 0; j < m; j++)
//             {
//                 scanf("%d", &z);
//                 sum += z;
//             }
//             printf("%d\n\n", sum);
//         }
//     }
//     return 0;
// }

// 1093 字符逆序
// int main()
// {
//     char str[105];
//     scanf("%[^\n]", str);
//     int len = strlen(str);
//     for (int i = 0; i < len / 2; i++)
//     {
//         char temp = str[i];
//         str[i] = str[len - i - 1];
//         str[len - i - 1] = temp;
//     }
//     printf("%s\n", str);
// }

// 1094 字符串的输入输出处理
// int main()
// {
//     char str[1005];
//     int n;
//     scanf("%d", &n);
//     getchar();
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%[^\n]", str);
//         getchar();
//         printf("%s\n\n", str);
//     }
//     while (scanf("%s", str) != EOF)
//     {
//         printf("%s\n\n", str);
//     }
//     return 0;
// }

// 1095 The 3n + 1 problem
// #define MAX 1000000
// int memo[MAX] = {0};
// int get_len(long long n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     if (n < MAX && memo[n] != 0)
//     {
//         return memo[n];
//     }
//     int res;
//     if (n % 2 == 0)
//     {
//         res = 1 + get_len(n / 2);
//     }
//     else
//     {
//         res = 1 + get_len(n * 3 + 1);
//     }
//     if (res < MAX)
//     {
//         memo[n] = res;
//     }
//     return memo[n];
// }
// int main()
// {
//     int i, j;
//     while (scanf("%d %d", &i, &j) != EOF)
//     {
//         int max = 0, start, end;
//         start = (i < j) ? i : j;
//         end = (i > j) ? i : j;
//         for (int num = start; num <= end; num++)
//         {
//             int len = get_len(num);
//             if (len > max)
//             {
//                 max = len;
//             }
//         }
//         printf("%d %d %d\n", i, j, max);
//     }
// }

// 1096 Minesweeper
// int pan(char n)
// {
//     if (n == '.')
//         return 0;
//     else if (n == '*')
//         return 1;
// }
// int main()
// {
//     int n, m, p = 1;
//     while (scanf("%d %d", &n, &m) == 2 && n && m)
//     {
//         char Mine_1[n][m]; // 地图数组
//         // 读取地图输入
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 scanf(" %c", &Mine_1[i][j]);
//             }
//         }
//         // 处理地图，生成游戏地图
//         char Mine[n][m];
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 int k = 0;
//                 if (Mine_1[i][j] == '*')
//                 {
//                     Mine[i][j] = '*';
//                     continue;
//                 }
//                 else
//                 {
//                     // 上一行
//                     if (i - 1 >= 0)
//                     {
//                         if (j - 1 >= 0)
//                         {
//                             k += pan(Mine_1[i - 1][j - 1]);
//                         }
//                         k += pan(Mine_1[i - 1][j]);
//                         if (j + 1 < m)
//                         {
//                             k += pan(Mine_1[i - 1][j + 1]);
//                         }
//                     }
//                     // 同行
//                     k += pan(Mine_1[i][j - 1]);
//                     k += pan(Mine_1[i][j + 1]);
//                     // 下一行
//                     if (i + 1 < n)
//                     {
//                         if (j - 1 >= 0)
//                             k += pan(Mine_1[i + 1][j - 1]);
//                         k += pan(Mine_1[i + 1][j]);
//                         if (j + 1 < m)
//                             k += pan(Mine_1[i + 1][j + 1]);
//                     }
//                     Mine[i][j] = '0' + k;
//                 }
//             }
//         }
//         // 输出游戏地图
//         printf("Field #%d:\n", p);
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 printf("%c", Mine[i][j]);
//             }
//             printf("\n");
//         }
//         printf("\n");
//         p++;
//     }
// }

// 1097 蛇形矩阵
// int main()
// {
//     int n;
//     while (scanf("%d", &n) != EOF)
//     {
//         int x = 1, y = 1;
//         for (int j = 0; j < n; j++)
//         {
//             y = y + j;
//             x = y;
//             printf("%d", x);
//             for (int i = j; i < n-1; i++)
//             {
//                 x = x + (i + 2);
//                 printf(" %d", x);
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }

// 1112 C语言考试练习题_一元二次方程
// int main()
// {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);
//     double delta = b * b - 4 * a * c;
//     if (delta > 0)
//     {
//         double x1 = (-b + sqrt(delta)) / (2 * a);
//         double x2 = (-b - sqrt(delta)) / (2 * a);
//         printf("%.2f %.2f", x1, x2);
//     }
//     else if (delta == 0)
//     {
//         double x = (-b) / (2 * a);
//         printf("%.2f %.2f", x,x);
//     }
//     return 0;
// }

// 1115 DNA
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     int first = 1;
//     while(N--)
//     {
//         int a,b;
//         scanf("%d%d", &a, &b);
//         if(!first)
//             printf("\n");
//         first = 0;
//         int total = a + (a-1)*(b-1);
//         int mid = a / 2;
//         for(int r=0; r < total; r++)
//         {
//             int pos = r % (a - 1);
//             // 当余数等于a-1时，对应单元底部，等价于pos=a-2
//             if(pos == a-1) pos = a-2;
//             int d = abs(pos - mid);
//             for(int c=0; c<a; c++)
//             {
//                 if(c == d || c == a-1-d)
//                     printf("x");
//                 else
//                     printf(" ");
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }

// 1173 计算球体积
// int main()
// {
//     double r;
//     double pi = acos(-1.0); // 使用反余弦函数计算π的值
//     while (scanf("%lf", &r) != EOF)
//     {
//         printf("%.3f\n", 4.0 / 3.0 * pi * r * r * r);
//     }
//     return 0;
// }

// 1267 A+B Problem
// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     printf("%d", a + b);
//     return 0;
// }

// 1480 模拟计算机
// int main(){
//     int a,b;
//     char op;
//     scanf("%d %d %c",&a,&b,&op);
//     switch(op){
//         case '+':
//             printf("%d",a+b);
//             break;
//         case '-':
//             printf("%d",a-b);
//             break;
//         case '*':
//             printf("%d",a*b);
//             break;
//         case '/':
//             if(b==0){
//                 return 0;
//             }else{
//                 printf("%d",a/b);
//             }
//             break;
//         case '%':
//             if(b==0){
//                 return 0;
//             }else{
//                 printf("%d",a%b);
//             }
//             break;
//     }
// }

// 1477 字符串输入输出函数
// void GetReal(double *n)
// {
//     printf("please input a number:\n");
//     scanf("%lf", n);
// }
// void GetString(char *str)
// {
//     printf("please input a string:\n");
//     scanf("%s", str);
// }
// int main()
// {
//     double n;
//     char str[1005];
//     GetReal(&n);
//     GetString(str);
//     printf("%g\n%s", n, str);
//     return 0;
// }

// 1668 printf基础练习2
// int main()
// {
//     long long n;
//     scanf("%lld", &n);
//     printf("0%o %lld 0x%x",n, n, n);
//     return 0;
// }

// 1669 求圆的面积
// int main(){
//     double n;
//     scanf("%lf",&n);
//     printf("%.2f",acos(-1.0)*n*n);
//     return 0;
// }

// 1670 拆分位数
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int g, s, b;
//     g = n % 10;
//     s = (n / 10) % 10;
//     b = n / 100;
//     printf("%d %d %d\n", g, s, b);
//     return 0;
// }

// 1671 小九九
// int main(){
//     for(int i=1;i<=9;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d*%d=%-3d",j,i,i*j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1761 学习ASLL码
// int main(){
//     printf("%d %c",'t',63);
//     return 0;
// }

// 1762 printf基础练习
// int main()
// {
//     long long n = 123456789;
//     printf("0%o 0x%x\n", n, n);
//     return 0;
// }

// 1763 sizeof的大作用
// int main(){
//     int a;
//     long long b;
//     char c;
//     double d;
//     float f;
//     printf("%d %d %d %d %d",sizeof(a),sizeof(c),sizeof(f),sizeof(d),sizeof(b));
//     return 0;
// }

// 1764 循环入门练习1
// long long xun(int n){
//     if(n==1){
//         return 1;
//     }
//     return n+xun(n-1);
// }
// int main(){
//     long long sum=xun(1000);
//     printf("%lld",sum);
//     return 0;
// }

// 1765 循环入门练习2
// int main()
// {
//     long long sum = 0;
//     for (int i = 1; i <= 1000; i++)
//     {
//         if (i % 7 == 0)
//         {
//             sum += i;
//         }
//     }
//     printf("%lld", sum);
//     return 0;
// }

// 1766 循环入门练习3
// long long xun(int n){
//     if(n==1){
//         return 1;
//     }
//     return n+xun(n-1);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     long long sum=xun(n);
//     printf("%lld\n",sum);
//     return 0;
// }

// 1767 循环入门练习4
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     long long sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 7 == 0)
//         {
//             sum += i;
//         }
//     }
//     printf("%lld\n", sum);
//     return 0;
// }

// 1768 循环入门练习5
// int main(){
//     int x;
//     scanf("%d",&x);
//     for(int i=1;i<x;i++){
//         if(x%i==0){
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }

// 1769 循环入门练习6
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         printf("%d",i);
//         for(int j=1;j<i;j++){
//             if(i%j==0){
//                 printf(" %d",j);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1770 链表之报数问题
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     struct Node *head = NULL;
//     for (int i = 1; i <= n; i++)
//     {
//         struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//         newNode->data = i;
//         newNode->next = NULL;
//         if (head == NULL)
//         {
//             head = newNode;
//             head->next = head;
//         }
//         else
//         {
//             struct Node *temp = head;
//             while (temp->next != head)
//             {
//                 temp = temp->next;
//             }
//             temp->next = newNode;
//             newNode->next = head;
//         }
//     }
//     struct Node *pre = head;
//     while (pre->next != pre)
//     {
//         pre = pre->next;
//         struct Node *del = pre->next;
//         pre->next = del->next;
//         pre = pre->next;
//         free(del);
//     }
//     printf("%d\n", pre->data);
//     return 0;
// }

//************
// 1771 链表之节点删除
// struct Node
// {
//     int id;    // 学号
//     int score; // 成绩
//     struct Node *next;
// };
// int main()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);
//     // ========== 1. 构建A链表（尾插法） ==========
//     struct Node *A_head = NULL;
//     struct Node *A_tail = NULL;
//     for (int i = 0; i < n; i++)
//     {
//         struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//         scanf("%d %d", &newNode->id, &newNode->score);
//         newNode->next = NULL;
//         if (A_head == NULL)
//         {
//             A_head = newNode;
//             A_tail = newNode;
//         }
//         else
//         {
//             A_tail->next = newNode;
//             A_tail = newNode;
//         }
//     }
//     // ========== 2. 构建B链表（尾插法） ==========
//     struct Node *B_head = NULL;
//     struct Node *B_tail = NULL;
//     for (int i = 0; i < m; i++)
//     {
//         struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//         scanf("%d %d", &newNode->id, &newNode->score);
//         newNode->next = NULL;
//         if (B_head == NULL)
//         {
//             B_head = newNode;
//             B_tail = newNode;
//         }
//         else
//         {
//             B_tail->next = newNode;
//             B_tail = newNode;
//         }
//     }
//     // ========== 3. 删除A中与B学号相同的节点 ==========
//     struct Node *pre = NULL; // 记录A中当前节点的前驱
//     struct Node *p = A_head; // A链表的遍历指针
//     while (p != NULL)
//     {
//         int isExist = 0; // 标记当前A节点的学号是否在B中存在
//         struct Node *q = B_head;
//         // 遍历B链表，检查学号是否重复
//         while (q != NULL)
//         {
//             if (p->id == q->id)
//             {
//                 isExist = 1;
//                 break;
//             }
//             q = q->next;
//         }
//         if (isExist) // 学号重复，删除当前p节点
//         {
//             struct Node *del = p;
//             if (pre == NULL) // 删除的是头节点
//             {
//                 A_head = p->next;
//                 p = A_head;
//             }
//             else // 删除中间/尾部节点
//             {
//                 pre->next = p->next;
//                 p = pre->next;
//             }
//             free(del);
//             n--; // 节点总数减1
//         }
//         else // 学号不重复，指针整体后移
//         {
//             pre = p;
//             p = p->next;
//         }
//     }
//     // ========== 4. 输出结果 ==========
//     printf("%d\n", n);
//     struct Node *temp = A_head;
//     while (temp != NULL)
//     {
//         printf("%d %d\n", temp->id, temp->score);
//         temp = temp->next;
//     }
//     // ========== 5. 释放内存（良好编程习惯） ==========
//     temp = A_head;
//     while (temp != NULL)
//     {
//         struct Node *del = temp;
//         temp = temp->next;
//         free(del);
//     }
//     temp = B_head;
//     while (temp != NULL)
//     {
//         struct Node *del = temp;
//         temp = temp->next;
//         free(del);
//     }
//     return 0;
// }

// 1772 二进制移位练习
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int num[32] = {0};
//     int i = 31;
//     while (n != 0)
//     {
//         num[i] = n % 2;
//         i--;
//         n = n / 2;
//     }
//     int sum = 0;
//     sum += num[27] * 1;
//     sum += num[26] * 2;
//     sum += num[25] * 4;
//     sum += num[24] * 8;
//     printf("%d\n", sum);
//     return 0;
// }

// 1773 C语言循环移位

// 1779 你的第一个程序
// int main()
// {
//     printf("Just do IT\n");
//     return 0;
// }

// 1777 循环练习之完美数判断
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int sum = 0;
//     for (int i = 1; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             sum += i;
//         }
//     }
//     if (sum == n)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }
//     return 0;
// }

// 1778 罗列完美数
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         int sum=0;
//         for(int j=1;j<i;j++){
//             if(i%j==0){
//                 sum+=j;
//             }
//         }
//         if(sum==i){
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }

// 1780 字符与它对应的ASC码
// int main(){
//     char c;
//     scanf("%c",&c);
//     printf("%d",c);
//     return 0;
// }

// 1781 登陆验证问题（一）
// int main()
// {
//     char username[25], password[25];
//     scanf("%20s %20s", username, password);
//     if (strcmp(username, "dotcpp") == 0 && strcmp(password, "123456") == 0)
//     {
//         printf("Login Successful!\n");
//     }
//     else
//     {
//         printf("Login Fails!\n");
//     }
//     return 0;
// }

// 1772 找出最长的字符串来
// int main()
// {
//     int n=5;
//     int max_len=0;
//     char max_str[1000];
//     while(n--){
//         char str[1000];
//         scanf(" %[^\n]", str);
//         int len=strlen(str);
//         if(len>max_len){
//             max_len=len;
//             strcpy(max_str, str);
//         }
//     }
//     printf("%s\n", max_str);
//     return 0;
// }

// 1783 星期判断机
// int main()
// {
//     int n;
//     scanf(" %d", &n);
//     switch (n)
//     {
//     case 1:
//         printf("Monday\n");
//         break;
//     case 2:
//         printf("Tuesday\n");
//         break;
//     case 3:
//         printf("Wednesday\n");
//         break;
//     case 4:
//         printf("Thursday\n");
//         break;
//     case 5:
//         printf("Friday\n");
//         break;
//     case 6:
//         printf("Saturday\n");
//         break;
//     case 0:
//         printf("Sunday\n");
//         break;
//     default:
//         printf("input error!\n");
//     }
//     return 0;
// }

// 1784 矩阵的对角线之和
// int main()
// {
//     int matrix[5][5];
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             scanf(" %d", &matrix[i][j]);
//         }
//     }
//     int sum_1 = 0, sum_2 = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         sum_1 += matrix[i][i];
//         sum_2 += matrix[i][4 - i];
//     }
//     printf("%d %d\n", sum_1, sum_2);
// }

// 1785 指针/引用练习之交换数字
// int swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     return 0;
// }
// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     swap(&a, &b);
//     printf("%d %d", a, b);
//     return 0;
// }

// 1793 玉龙学长买雪糕
// int main()
// {
//     int n;
//     scanf(" %d", &n);
//     int sum = 0, c = 1;
//     for (int i = 0; i < n; i++)
//     {
//         sum += c;
//         c = 2 * c + 1;
//     }
//     printf("%d\n", sum);
//     return 0;
// }

// 1798 汪汪与打针
// int main()
// {
//     int a, b;
//     while (scanf("%d %d", &a, &b) == 2)
//     {
//         int c = 5;
//         int sum = 0;
//         while (c-- && a >= 100)
//         {
//             if (c > 1 && a >= 120)
//             {
//                 a -= 120;
//                 sum++;
//                 a += b;
//                 continue;
//             }
//             else if (c == 1 && a >= 100)
//             {
//                 a -= 100;
//                 sum++;
//                 break;
//             }
//             break;
//         }
//         printf("%d\n", sum);
//     }
//     return 0;
// }

// 1804 蓝桥杯算法提高- c++_ch02_02
// int main(){
//     int a,b;
//     char op;
//     scanf("%d %d %c",&a,&b,&op);
//     switch(op){
//         case '+':
//             printf("%d\n",a+b);
//             break;
//         case '-':
//             printf("%d\n",a-b);
//             break;
//         case '*':
//             printf("%d\n",a*b);
//             break;
//         case '/':
//             if(b==0){
//                 return 0;
//             }else{
//                 printf("%d\n",a/b);
//             }
//             break;
//         case '%':
//             if(b==0){
//                 return 0;
//             }else{
//                 printf("%d\n",a%b);
//             }
//             break;
//     }
//     return 0;
// }

// 1805 蓝桥杯算法提高- c++_ch02_03
// enum Gestrue
// {
//     SHI_TOU = 0, // 石头
//     BU = 1,      // 布
//     JIAN_DAN = 2 // 剪刀
// };
// enum Result
// {
//     WIN = 1,
//     LOSE = -1,
//     DRAW = 0
// };
// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     enum Result result;
//     if (a == b)
//     {
//         result = DRAW;
//         printf("%d\n", DRAW);
//     }
//     else if ((a == SHI_TOU && b == JIAN_DAN) || (a == BU && b == SHI_TOU) || (a == JIAN_DAN && b == BU))
//     {
//         result = WIN;
//         printf("%d\n", WIN);
//     }
//     else
//     {
//         result = LOSE;
//         printf("%d\n", LOSE);
//     }
//     return 0;
// }

// 1806 输入输出练习之第二个数字
// int main()
// {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);
//     printf("%d", b);
//     return 0;
// }

// 1807 输入输出练习之格式控制
// int main()
// {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);
//     printf("%-8d%-8d%-8d", a, b, c);
//     return 0;
// }

// 1808 输入输出练习之精度控制1
// int main()
// {
//     float a;
//     scanf("%f", &a);
//     printf("%.3f", a);
//     return 0;
// }

// 1809 输入输出练习之精度控制2
// int main()
// {
//     double a;
//     scanf("%lf", &a);
//     printf("%.12f", a);
//     return 0;
// }

// 1810 输入输出练习之精度控制3
// int main()
// {
//     char a;
//     int b;
//     float c;
//     double d;
//     scanf("%c %d %f %lf", &a, &b, &c, &d);
//     printf("%c %4d %.2f %.12lf", a, b, c, d);
//     return 0;
// }

// 1811 输入输出练习之浮点数专题
// int main()
// {
//     double a;
//     scanf("%lf", &a);
//     printf("%f", a);
//     printf("\n%.5f", a);
//     printf("\n%e", a);
//     printf("\n%g", a);
// }

// 1812 输入输出练习之输出图案
// int main()
// {
//     char c;
//     scanf("%c", &c);
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3 - i - 1; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 0; j < 2 * i + 1; j++)
//         {
//             printf("%c", c);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// ********************
// 1813 蓝桥杯算法提高- c++_ch03_02
int main(void)
{
    int n;
    scanf("%d", &n);
    // i 行号，0~n，一共n+1行
    for (int i = 0; i <= n; i++)
    {
        // 打印行首前置空格，实现居中：(n-i)*2 个空格
        for (int s = 0; s < (n - i) * 2; s++)
        {
            printf(" ");
        }
        long long c = 1;
        for (int k = 0; k <= i; k++)
        {
            printf("%lld   ", c); // 数字后面跟两个空格
            c = c * (i - k) / (k + 1);
        }
        printf("\n");
    }
    return 0;
}

// 1849 成绩等级转换
// int main()
// {
//     int score;
//     while (scanf("%d", &score) == 1)
//     {
//         if (score < 0 || score > 100)
//         {
//             printf("Score is error!\n");
//         }
//         else if (score >= 90)
//         {
//             printf("A\n");
//         }
//         else if (score >= 80)
//         {
//             printf("B\n");
//         }
//         else if (score >= 70)
//         {
//             printf("C\n");
//         }
//         else if (score >= 60)
//         {
//             printf("D\n");
//         }
//         else
//         {
//             printf("E\n");
//         }
//     }
//     return 0;
// }
