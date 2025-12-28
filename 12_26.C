#include <stdio.h>
#include <stdlib.h>
int FindMax(int *array, int count)
{
    int i;
    int Max = array[0];
    for (i = 0; i < count; i++)
    {
        if (array[i] > Max)
        {

            Max = array[i];
        }
    }
    return Max;
}

int main()
{
    system("chcp 65001");
    int a[7] = {1, 4, 56, 7, 9, 0, 200};
    int Max;
    Max = FindMax(a, 7);
    printf("最大的值为%d\n", Max);
}