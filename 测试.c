#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    system("chcp 65001");
    int i;
    for (i = 1; i <= 50; i++)
    {
        int a = 0;
        if (i >= 45)
        {

            break;
        }
        if (i % 3 == 0)
        {

            printf("倔强数字是%d\n", i);
        }
        if (i % 5 == 0)
        {
            // a=1;
            continue;
            // continue;
        }
    }
}