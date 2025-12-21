#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    system("chcp 65001");
    int biaoge[8] = {4, 2, 6, 7, 8, 0, 7, 5};
    int i, j;1
    int temp;
    printf("原来的未排序的是:\n");
    for (i = 0; i < 8; i++)
    {
        printf("%-4d", biaoge[i]);
    }
    for (i = 0; i < 8 - 1; i++)
    {
        for (j = 0; j < 8 - 1 - i; j++)
        {
            if (biaoge[j] > biaoge[j + 1])
            {
                temp = biaoge[j];
                biaoge[j] = biaoge[j + 1];
                biaoge[j + 1] = temp;
            }
        }
    }
    printf("\n处理的数据是\n");
    for (i = 0; i < 8; i++)
    {
        printf("%-4d", biaoge[i]);
    }
    printf("\n");
}