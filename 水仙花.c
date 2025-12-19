#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    system("chcp 65001");
    int n;
    int count = 0;
    int a, b, c;
    int sum = 0;
    for (n = 100; n < 1000; n++)
    {
        a = n / 100;
        b = (n / 10) % 10;
        c = n % 10;
        if (n == a * a * a + b * b * b + c * c * c)
        {
            printf("水仙花的数字是%d\n", n);
            count++;
            sum += n;
        }
    }
    printf("总的水仙花的数字是%d\n", count);
    printf("水仙花数字的总和是%d\n", sum);

    return 0;
}