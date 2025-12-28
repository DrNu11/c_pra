#include <stdio.h>
#include <stdlib.h>
long long jc(int m)
{
    int j;
    long long jc = 1;
    for (j = 1; j <= m; j++)
    {
        jc *= j;
    }
    return jc;
}

int main()
{
    system("chcp 65001");
    int i, n;
    long long sum = 0;
    printf("请输入一个正整数n：");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + jc(i);
    }
    printf("1!+2!+...+%d!=%lld\n", n, sum);
    return 0;
}
