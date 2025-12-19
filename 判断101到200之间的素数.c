#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    system("chcp 65001");
    int n, i;
    printf("101到200之间的素数是：\n");
    for (n = 101; n <= 200; n++)
    {
        int a = 1;
        for (i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                a = 0;
                break;
            }
        }
        if (a)
        {
            printf("%d ", n);
        }
    }
}