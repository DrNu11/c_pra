// 先算第n项的数字
// 再算第n项数的和
// 最后在求和
long long term(int n, int a)
{
    if (n == 1)
    {
        return a;
    }
    else
    {
        return term(n - 1, a) * 10 + a;
    }
}
long long sum(int n, int a)
{
    if (n == 1)
    {
        return a;
    }
    else
    {

        return sum(n - 1, a) + term(n, a);
    }
}
#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    int n, a;
    system("chcp 65001");
    printf("请输入项数和数字:");
    scanf("%d %d", &n, &a);
    long long result = sum(n, a);

    printf("递归计算结果: %lld\n", result);
    return 0;
}