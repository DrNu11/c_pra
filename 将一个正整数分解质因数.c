#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    system("chcp 65001");
    int a, b;
    printf("请输入你要分解的数字:");
    scanf("%d", &a);
    for (b = 2; b <= a; b++)
    {
        while (a % b == 0)
        {
            printf("%d\n", b);
            a = a / b;
        }
    }
    return 0;
}
