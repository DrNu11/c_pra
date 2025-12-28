#include <stdio.h>
long long jc(int m)
{
    long long jc = 1;
    int j;
    for (j = 1; j <= m; j++)
    {
        jc *= j;
    }
    return jc;
}

int main()
{
    int i;
    long long sum = 0;
    for (i = 1; i <= 5; i++)
    {
        sum += jc(i);
    }
    printf("%lld\n", sum);
    return 0;
}