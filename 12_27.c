#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("chcp 65001");
    int a, n;
    int sum = 0;
    int i;
    int t = 0;
    printf("请输入你的a和n！");
    scanf("%d%d", &a, &n);
    for (i = 1; i <= n; i++)
    {
        t = t * 10 + a;
        sum = sum + t;
    }
    printf("值为%d\n", sum);
    return 0;
}