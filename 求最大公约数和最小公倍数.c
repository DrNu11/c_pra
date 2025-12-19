#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    system("chcp 65001");
    int a = 1997;
    int b = 615;
    int r;

    r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    printf("所以,最大公约数是:%d\n", b);
    return 0;
}