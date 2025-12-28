#include <stdio.h>
#include <stdlib.h>
long long calculate_sum(int a, int n);
int main(int argc, const char *argv[])
{
    long long result;
    system("chcp 65001");
    int a, n;
    printf("Please print a(数字) and n(项数)");
    scanf("%d%d", &a, &n);

    result = calculate_sum(a, n);

    printf("The result is %lld\n", result);

    return 0;
}
long long calculate_sum(int a, int n)
{
    long long sum = 0;
    long long term = 0;
    int i;
    for (i = 1; i <= n; i++)
    {
        term = term * 10 + a;
        sum = sum + term;
    }

    return sum;
}
