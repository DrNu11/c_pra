#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("chcp 65001");
    int a, n;
    int sum = 0;
    int i;
    int t = 0;
    printf("请输入你要计算的数字以及位数:");
    scanf("%d%d", &a, &n);
    for (i = 1; i <= n; i++)
    {
        t = t * 10 + a;
        sum = sum + t;
        printf("第 %d 项是: %d\n", i, sum);
    }

    printf("%d", sum);
}