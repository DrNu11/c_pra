#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    system("chcp 65001");
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    int b[3][3];
    int i, j;
    printf("原始的矩阵为:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            printf("%d\t", a[i][j]);
        }

        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)

        {

            b[j][i] = a[i][j];
        }
    }

    printf("转置后的矩阵：\n");
    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)

        {
            printf("%d\t", b[i][j]);
        }

        printf("\n");
    }
}
